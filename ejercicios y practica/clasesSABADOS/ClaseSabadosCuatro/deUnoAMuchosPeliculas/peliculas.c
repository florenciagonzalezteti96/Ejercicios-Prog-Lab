#include "peliculas.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO -1

int inicializarEstructuraPelicula(ePelicula listaPelicula[], int tam)//INICIALIZO LOS ESPACIOS COMO LIBRES.
{
   //int retorno = 0;

    int i;
    for(i=0; i<tam; i++)
    {
        listaPelicula[i].estado = LIBRE;
    }

    //return retorno;
    return 0;

}

int buscarEspacioLibrePelicula(ePelicula listaPelicula[], int tam)
{
    int i;
    int retorno = -1;

    for(i=0;i<tam;i++)
    {
        if(listaPelicula[i].estado == LIBRE)
        {
            retorno = i;
        }
    }

    return retorno;
}
void cargarEstructuraPelicula(ePelicula listaPelicula[], int tam)
{
    int i;
    int idAnterior;

    if(buscarEspacioLibrePelicula(listaPelicula, tam) == -1)//si hay espacio libre
    {
        printf("No hay espacio.");
    }
    else
    {
        for(i=0; i<tam; i++)
        {
            printf("Ingrese titulo de la pelicula: \n");
            fflush(stdin);
            gets(listaPelicula[i].titulo);
            printf("Ingrese nombre del director: \n");
            fflush(stdin);
            gets(listaPelicula[i].director);
            printf("Ingrese la duracion de la pelicula: \n");
            scanf("%f", &listaPelicula[i].duracion);
            printf("Ingrese el anio del estreno: \n");
            scanf("%d", &listaPelicula[i].anioDeEstreno);
            idAnterior = dameMayorIdPelicula(listaPelicula, tam);
            listaPelicula[i].id = idAnterior++;

            listaPelicula[i].estado = OCUPADO;

            break;
        }
    }
}

int dameMayorIdPelicula(ePelicula listaPelicula[], int tam)
{
    int i;
    int flag = 0;
    int aux = 0;
    for(i=0; i<tam; i++)
    {
        if(flag == 0 || listaPelicula[i].id>aux)
        {
            aux = listaPelicula[i].id;
            flag = 1;
        }
    }
    return aux;
}

