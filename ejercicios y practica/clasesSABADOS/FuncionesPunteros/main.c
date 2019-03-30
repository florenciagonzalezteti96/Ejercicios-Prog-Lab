#include <stdio.h>
#include <stdlib.h>
#include "funcionespunteros.h"

int main()
{
/*
    int sueldo;

    printf("\nlugar sueldo %d", &sueldo);
    sueldo = 10000;

    cambiarValor(sueldo);

    printf("\n por valor %d", sueldo);


    cambiarReferencia (&sueldo);
    printf(" por referencia :%d", sueldo);

----------------------------------*/

    /*int miEdad;

    while(pedirEdad(&miEdad)==0)
    {

    }
    printf("Su edad es %d\n", miEdad);
-------------------------------------------
    if(pedirEdad(&miEdad)==1)
    {
            printf("Su edad es %d", miEdad);
    }
    else
    {
        printf("No se pudo");
    }
-------------------------------------------------*/

    int sePudo;
    float respuesta;

    sePudo=dividir(15, 2, &respuesta);

    if(sePudo==1)
    {
        printf("La respuesta es %f", respuesta);
    }
    else{
        printf("No se pudo");
    }



    return 0;




}
