#include <stdio.h>
#include <stdlib.h>
#include "funcionesConPunterosAEnteros.h"

int main()
{
    system("COLOR FD");
    int vector[5];
    int* pVector;
    int maximo;

    pVector = vector;

    inicializarVectorConPunteros(pVector, 5);
    cargarVectorConPunteros(pVector, 5, "Ingrese un valor: \n");
    mostrarVectorConPunteros(pVector, 5, "Este es el vector: \n");
    mostrarMaximoConPunteros(pVector, 5, &maximo);
    ordenarDeMayorAMenorVectorConPunteros(pVector, 5);
    ordenarDeMenorAMayorVectorConPunteros(pVector,5);
    sacarPromedioEnVectorConPunteros(pVector, 5);
    mostrarVector(pVector, 5);

    return 0;
}

