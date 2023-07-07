/*
Archivo: main.cpp
Autores: Kevin Jordan Alzate <kevin.jordan@correounivalle.edu.co>
         Junior Orlando Cantor Arévalo <junior.cantor@correounivalle.edu.co>
         Esteban Camilo Martinez Urbano <esteban.urbano@correounivalle.edu.co>
Fecha creacion: 21-06-2023
Fecha ultima modificacion: 6-07-2023
Version: 1
Licencia: GNU-GPL
*/
#include <iostream>
#include <string>
#include <vector>
#include "Memoria.h"

using namespace std;

int main() {
    vector<string> instrucciones; // Vector para almacenar las instrucciones
    string instruccion; // Variable para almacenar cada instrucción

    // Leer las instrucciones hasta encontrar "END NULL NULL NULL"
    while (getline(cin, instruccion)) {
        if (instruccion == "END NULL NULL NULL") {
            break;
        }
        instrucciones.push_back(instruccion);
    }

    Memoria memoria; // Crear objeto de la clase Memoria
    memoria.ejecutarInstrucciones(instrucciones); // Ejecutar las instrucciones

    return 0;
}
