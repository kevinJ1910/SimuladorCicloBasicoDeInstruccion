/*
Archivo: Memoria.cpp
Autores: Kevin Jordan Alzate <kevin.jordan@correounivalle.edu.co>
         Junior Orlando Cantor Arévalo <junior.cantor@correounivalle.edu.co>
         Esteban Camilo Martinez Urbano <esteban.urbano@correounivalle.edu.co>
Fecha creacion: 21-06-2023
Fecha ultima modificacion: 6-07-2023
Version: 1
Licencia: GNU-GPL
*/
#include "Memoria.h"
#include <sstream>
#include <iostream>

using namespace std;

// Constructor: inicializa el acumulador y la memoria
Memoria::Memoria() : acumulador(0) {
    for (int i = 0; i < 1000; i++) {
        memoria[i] = 0;
    }
}

// Método para ejecutar instrucciones
void Memoria::ejecutarInstrucciones(const vector<string>& instrucciones) {
    // Procesar cada instrucción
    for (int i = 0; i < instrucciones.size(); i++) {
        string instruccion = instrucciones[i];
        stringstream ss(instruccion);
        string operacion, operand1, operand2, operand3;
        ss >> operacion >> operand1 >> operand2 >> operand3;

        if (operacion == "SET") { // Asignar un valor a una posición de memoria
            int direccion = stoi(operand1.substr(1));
            int valor = stoi(operand2);
            memoria[direccion] = valor;
        } else if (operacion == "ADD") { // Sumar el valor de una posición de memoria al acumulador
            int direccion = stoi(operand1.substr(1));
            acumulador += memoria[direccion];
        } else if (operacion == "LDR") { // Cargar el valor de una posición de memoria en el acumulador
            int direccion = stoi(operand1.substr(1));
            acumulador = memoria[direccion];
        } else if (operacion == "STR") { // Almacenar el valor del acumulador en una posición de memoria
            int direccion = stoi(operand1.substr(1));
            memoria[direccion] = acumulador;
        } else if (operacion == "SHW") { // Mostrar el valor de una posición de memoria
            int direccion = stoi(operand1.substr(1));
            cout << memoria[direccion];
        } else if (operacion == "END") { // Terminar el programa
            break;
        }
    }
}
