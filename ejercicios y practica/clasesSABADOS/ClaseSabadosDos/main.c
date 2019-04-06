#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"

int main()
{
    int edad;
    int seCargo;

    do
    {
        seCargo = dameEdadTres(&edad, "Ingrese una edad");
    }
    while(seCargo == 0);

    printf("Su edad es %d", edad);

    /*if (dameEdadDos(&edad, "Ingrese una edad") == 1)//PARA VALIDAR SI ES UN ENTERO O NO -->segunda y tercera funcion.
    {
        printf("La edad es %d", edad);
    }
    else
    {
        printf("No se pudo");
    }*/

    return 0;
}
