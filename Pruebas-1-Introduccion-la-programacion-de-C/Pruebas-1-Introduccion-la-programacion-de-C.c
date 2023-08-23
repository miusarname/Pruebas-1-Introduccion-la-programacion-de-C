// Pruebas-1-Introduccion-la-programacion-de-C.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

#include <stdio.h>
#include <math.h>
#include <windows.h>

#define PI 3.141592653589793238462643383

float calcularAreaCirculo();

float calcularAreaCirculo() {
    float radio;
    printf("Dame el valor del area:");
    scanf_s("%f", &radio);
    return PI *pow(radio,2);
}

int verificarCine(int idasAlCine){
    if (idasAlCine >= 3)
    {
        return 1;
    }
    else {
        return 0;
    }

}

int main() {
    int flag, operacionToDo,resultado,cantidadIdasCine;
    char userName[50], frequency[20];
    flag = 1;


    while (flag == 1) {
        printf("Cual es tu nombre?:");
        gets_s(userName, sizeof(userName));
        printf("%s", userName);
        system("cls");
        printf("\nBienvenido %s a tu programa para hacer de todo un poco\n",userName);
        printf("El día de hoy puedes hacer las siguientes operaciones:\n");
        printf("1. Calcular el área de un círculo\n2.Saber si fuiste al cine más de 3 veces en el tiempo que desees\nQue deseas hacer : ");
        scanf_s("%i", &operacionToDo);
        if (operacionToDo == 1) //39
        {
            float resulta = calcularAreaCirculo();
            printf("El resultado fue %f", resulta);
            Sleep(3 * 1000);
        }
        else if(operacionToDo == 2){
            printf("Qué tiempo quieres que te diga? (año, mes o dia): ");
            scanf_s("%s", frequency, sizeof(frequency));
            printf("Cuantas veces has ido al cine en ese tiempo: ");
            scanf_s("%i", &cantidadIdasCine);
            resultado = verificarCine(cantidadIdasCine);
            if (resultado == 1) {
                printf("Muy mal has gastado mucho dinero en esta %s, yendo al cine\n", frequency);
                Sleep(5*1000);
            }
            else {
                printf("Muy bien sabes cómo gastar tu dinero\n");
                Sleep(5 * 1000);
            }
        }
        else {
            flag = 0;
        }


    }

    return 0;
}
