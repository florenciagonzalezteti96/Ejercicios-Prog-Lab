#include "Operaciones.h"
//A = X
//B = Y
int sumarOperandos (int, int);
int restarOperandos (int, int);
int dividirOperandos (int, int);
int multiplicarOperandos (int, int);
int calcularFactorialDeA (int);
int calcularFactorialDeB (int);


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
    int dividir;

    dividir = x/y;

    return dividir;
}

int multiplicarOperandos (int x, int y)
{
    int multiplicar;

    multiplicar = x*y;

    return multiplicar;
}

int calcularFactorialDeA (int x)
{
    int resultadoDeFactorizacionDeA;

    if(x == 0 || x == 1)
    {
        resultadoDeFactorizacionDeA = 1;
    }
    else
    {
        resultadoDeFactorizacionDeA = x * calcularFactorialDeA(x - 1);
    }

    return resultadoDeFactorizacionDeA;
}

int calcularFactorialDeB (int y)
{
    int resultadoDeFactorizacionDeB;

    if(y == 0 || y == 1)
    {
        resultadoDeFactorizacionDeB = 1;
    }
    else
    {
        resultadoDeFactorizacionDeB = y * calcularFactorialDeB(y - 1);
    }

    return resultadoDeFactorizacionDeB;
}




