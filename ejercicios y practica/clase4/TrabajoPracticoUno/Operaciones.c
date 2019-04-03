#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"
//A = X
//B = Y
float sumarOperandos (float, float);
float restarOperandos (float, float);
float dividirOperandos (float, float);
float multiplicarOperandos (float, float);
float calcularFactorialDeOperando (float);

float sumarOperandos (float x, float y)
 {
     float sumar;

     sumar = x+y;

     return sumar;
 }

float restarOperandos (float x, float y)
{
    float restar;
    restar = x-y;

    return restar;
}

float dividirOperandos (float x, float y)
{
    float division;
    division = (float)x/y;

    return division;
}

float multiplicarOperandos (float x, float y)
{
    float multiplicar;

    multiplicar = x*y;

    return multiplicar;
}

float calcularFactorialDeOperando (float x)
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




