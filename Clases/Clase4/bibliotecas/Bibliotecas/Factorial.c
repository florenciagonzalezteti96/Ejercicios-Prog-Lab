#include <stdio.h>
#include <stdlib.h>
#include "Ingresos.h"
#include "Recursividad.h"

/*int main()
{
    int edad;
    int legajo;
    int peso;

    edad = pedirEntero("Ingrese una edad: ");
    legajo = pedirEntero("Ingrese un legajo: ");
    peso = pedirEntero("Ingrese un peso: ");

    return 0;
}*/
//int variable --> variable global. =/= variable local

int main()
{
    int resultado = calcularFactorial (5);//calcularFactorial (5)-> PARAMETRO ACTUAL. EL PARAMETRO EN EL PROTORIPO ES UN PARAMETRO FORMAL.
    printf("%d", resultado);

    return 0;
}


