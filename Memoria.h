/*
Archivo: Memoria.h
Autores: Kevin Jordan Alzate <kevin.jordan@correounivalle.edu.co>
         Junior Orlando Cantor Arévalo <junior.cantor@correounivalle.edu.co>
         Esteban Camilo Martinez Urbano <esteban.urbano@correounivalle.edu.co>
Fecha creacion: 21-06-2023
Fecha ultima modificacion: 6-07-2023
Version: 1
Licencia: GNU-GPL
*/
#ifndef MEMORIA_H
#define MEMORIA_H

#include <vector>
#include <string>

class Memoria {
public:
    Memoria(); // Constructor
    void ejecutarInstrucciones(const std::vector<std::string>& instrucciones); // Método para ejecutar instrucciones
private:
    int acumulador; // Acumulador para almacenar resultados intermedios
    int memoria[1000]; // Memoria para almacenar valores
};

#endif
