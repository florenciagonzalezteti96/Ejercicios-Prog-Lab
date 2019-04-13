#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"
#define TAM 3 //TAMAÑO DEL ARRAY DE PRECIO

//#%d --> PARA QUE ME MUESTRE EL INDICE DENTRO DE DONDE ESTA.
//SI USO EL ATOI O EL ATOF DEPENDE DE QUE TIPO DE DATO QUIERO GUARDAR. SI QUIERO GUARDAR INT, ATOI. SI QUIERO GUARDAR FLOAT, ATOF.
typedef struct
{
    float precios[TAM];
    char codigo[TAM][7];

}Producto;

int main()
{
    float precios;
    char codigo[7];
    //char [7][TAM];-->NO!
    Producto unProducto;
    int i;
    //int j;
    int respuesta;
    char ingreso[7];
    printf("Ingrese cadena:\n");
    scanf("%s", ingreso);

    respuesta = strlen(ingreso);
    printf("Cantidad de caracteres para ingreso: %d\n", respuesta);

    respuesta = strlen("lalala");
    printf("Cantidad de caracteres para lalala: %d\n", respuesta);

    for(i=0; i<TAM; i++)
    {
        while (getPrecio("Ingrese un precio:\n", &unProducto[i].precios)==0)
        {
            printf("Error. Reingrese!\n");
        }
        while (getCodigo("Ingrese un codigo:\n", unProducto[i].codigo)==0)
        {
            printf("Error. Reingrese!\n");
        }
    }

    for(i=0; i<TAM; i++)
    {
        printf("el precio es %f\n", unProducto.precios);
        printf("el codigo es %s\n", unProducto.codigo);
    }
    /*for(i=0;i<TAM - 1;i++)
    {
        for(j=1;j<TAM;j++)
        {
            if(precios[i]>precios[j])
            {
                int aux;
                aux = precio[i];
                precio [i] = precio [j];
                precio [j] =  aux;
            }
        }
    }*///SWAP.
    return 0;
}
