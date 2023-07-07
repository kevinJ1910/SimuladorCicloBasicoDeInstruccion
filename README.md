# Proyecto Simulador de Ciclo Básico de instrucción

### Autores:

    Kevin Jordan Alzate - 2228507 <kevin.jordan@correounivalle.edu.co>
    Junior Orlando Cantor Arévalo - 2224949 <junior.cantor@correounivalle.edu.co>
	Esteban Camilo Martinez Urbano - 2226969 <esteban.urbano@correounivalle.edu.co>

## Descripcion

Este código simula una memoria y permite al usuario manipularla mediante la ejecución de instrucciones. La memoria se representa como un arreglo de posiciones, cada una de las cuales puede almacenar un valor entero. También hay un acumulador que se usa para almacenar resultados intermedios.

El programa lee una serie de instrucciones desde la entrada estándar y las ejecuta una por una. Estas instrucciones permiten al usuario realizar operaciones como asignar valores a posiciones de memoria, sumar valores, cargar y almacenar valores en el acumulador, y mostrar valores en la pantalla.

## Requisitos

- Compilador de C++ (como g++)
- Sistema operativo compatible (Windows, macOS, Linux)

## Compilación

Para compilar el proyecto, abre una terminal o línea de comandos en la carpeta del proyecto y ejecuta el siguiente comando:

g++ main.cpp Memoria.cpp -o memoria


Esto creará un archivo ejecutable llamado `memoria` (o `memoria.exe` en Windows).

## Uso

Para usar el programa, abre una terminal o línea de comandos en la carpeta del proyecto y ejecuta el archivo ejecutable con el siguiente comando:

./memoria


Luego, puedes ingresar las instrucciones una por una. El programa terminará cuando ingreses la instrucción "END NULL NULL NULL".

## Instrucciones disponibles

- `SET [dirección] [valor]`: Asigna un valor a una posición de memoria.
- `ADD [dirección]`: Suma el valor de una posición de memoria al acumulador.
- `LDR [dirección]`: Carga el valor de una posición de memoria en el acumulador.
- `STR [dirección]`: Almacena el valor del acumulador en una posición de memoria.
- `SHW [dirección]`: Muestra el valor de una posición de memoria.
- `END`: Termina el programa.

## Ejemplo

Aquí tienes un ejemplo de uso del programa:

- SET  D0 5 NULL NULL
- SET D1 10 NULL NULL
- ADD D0 NULL NULL
- ADD D1 NULL NULL
- STR D2 NULL NULL
- SHW D2 NULL NULL
- END NULL NULL NULL

> 15

En este ejemplo, se asignan los valores 5 y 10 a las posiciones 0 y 1 de la memoria, respectivamente. Luego, se suman esos valores al acumulador y se almacena el resultado (15) en la posición 2 de la memoria. Finalmente, se muestra el valor almacenado en la posición 2.
