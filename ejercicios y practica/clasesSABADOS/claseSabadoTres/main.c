#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"
#define TAM 3 //TAMAÑO DEL ARRAY DE PRECIO

//#%d --> PARA QUE ME MUESTRE EL INDICE DENTRO DE DONDE ESTA.
//SI USO EL ATOI O EL ATOF DEPENDE DE QUE TIPO DE DATO QUIERO GUARDAR. SI QUIERO GUARDAR INT, ATOI. SI QUIERO GUARDAR FLOAT, ATOF.
typedef struct
{
    float precio;
    char codigo[TAM][7];

}Producto;

int main()
{
    float precios[TAM];
    char codigo[TAM][7];
    //char [7][TAM];-->NO!
    Producto unProducto;//Este tiene un producto. Aca puedo acceder al precio de UN producto.
    Producto ConjuntoDeProductos[TAM];//Este conjunto tiene varios productos. Aca puedo acceder al precio de diferentes productos.
    int i;
    int j;
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
        while (getPrecio("Ingrese un precio:\n", &ConjuntoDeProductos[i].precio)==0)
        {
            printf("Error. Reingrese!\n");
        }
        while (getCodigo("Ingrese un codigo:\n", ConjuntoDeProductos[i].codigo)==0)
        {
            printf("Error. Reingrese!\n");
        }
    }

    for(i=0; i<TAM; i++)
    {
        printf("el precio es %f\n", ConjuntoDeProductos[i].precio);//quiero mostrar por indice.
        printf("el codigo es %s\n", ConjuntoDeProductos[i].codigo);
    }
    for(i=0;i<TAM - 1;i++)
    {
        for(j=1;j<TAM;j++)
        {
            if(ConjuntoDeProductos[i].precio<ConjuntoDeProductos[j].precio)
            {
                int aux;
                aux = ConjuntoDeProductos[i];
                ConjuntoDeProductos [i] = ConjuntoDeProductos [j];
                ConjuntoDeProductos [j] =  aux;
            }
        }
    }

    printf("El orden es:\nCodigo: %s Precio %f", ConjuntoDeProductos[i].codigo, ConjuntoDeProductos[i].precio);


    return 0;
}
