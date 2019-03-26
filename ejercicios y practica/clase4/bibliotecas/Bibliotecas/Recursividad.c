//calculo de factorial. generalmente se usa para probabilidad, por ejemplo
// el calculo de factorial seria como un for
#include "Recursividad.h"


int calcularFactorial (int numero)
{
    int resultado;//recibe un entero

    if(numero == 0 || numero == 1)
    {
        resultado = 1;
    }
    else
    {
        resultado = numero * calcularFactorial(numero -1);//antes de resolver la multiplicacion, resuelve el factorial.
    }


    return resultado;//devuelve un entero
}

