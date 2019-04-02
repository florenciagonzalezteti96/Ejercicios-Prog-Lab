#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"
//A = X
//B = Y
int sumarOperandos (int x, int y);
int restarOperandos (int x, int y);
int dividirOperandos (int x, int y);
int multiplicarOperandos (int x, int y);
int calcularFactorialDeOperando (int x);

int sumarOperandos(int x, int y)
 {
     int sumar;

     sumar = x+y;

     return sumar;
 }

int restarOperandos(int x, int y)
{
    int restar;
    restar = x-y;

    return restar;
}

int dividirOperandos(int x, int y)
{
    float division;

    if(y != 0)
    {
        division = (float)x/y;
    }
    else
    {
        division = printf("La division por cero no es posible. Ingrese un nuevo segundo operando.");
    }

    return division;
}

int multiplicarOperandos (int x, int y)
{
    int multiplicar;

    multiplicar = x*y;

    return multiplicar;
}

int calcularFactorialDeOperando (int x)
{
    int resultadoDeFactorizacionDeOperando;

    if(x == 0 || x == 1)
    {
        resultadoDeFactorizacionDeOperando = 1;
    }
    else
    {
        resultadoDeFactorizacionDeOperando = x * calcularFactorialDeOperando(x - 1);
    }

    return resultadoDeFactorizacionDeOperando;
}




