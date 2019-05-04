#include "estudios.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO -1

int inicializarEstructuraEstudio(eEstudio listaEstudio[], int tam)//INICIALIZO LOS ESPACIOS COMO LIBRES.
{
   //int retorno = 0;

    int i;
    for(i=0; i<tam; i++)
    {
        listaEstudio[i].estado = LIBRE;
    }

    //return retorno;
    return 0;

}

int buscarEspacioLibreEstudio(eEstudio listaEstudio[], int tam)
{
    int i;
    int retorno = -1;

    for(i=0;i<tam;i++)
    {
        if(listaEstudio[i].estado == LIBRE)
        {
            retorno = i;
            break;
        }
    }

    return retorno;
}

void cargarEstructuraEstudio(eEstudio listaEstudio[], int tam)
{
    int i;
    int idAnterior;

    if(buscarEspacioLibreEstudio(listaEstudio, tam) == -1)//si hay espacio libre
    {
        printf("No hay espacio.");
    }
    else
    {
        for(i=0; i<tam; i++)
        {
            /*printf("Ingrese nombrel estudio: \n");
            fflush(stdin);
            gets(listaEstudio[i].id);*/
            printf("Ingrese pais del estudio: \n");
            fflush(stdin);
            gets(listaEstudio[i].pais);
            printf("Ingrese el nombre del estudio: \n");
            fflush(stdin);
            gets(listaEstudio[i].nombre);
            printf("Ingrese el año de creacion: \n");
            scanf("%d", &listaEstudio[i].anioDeCreacion);
            idAnterior = dameMayorIdEstudio(listaEstudio, tam);
            listaEstudio[i].id = idAnterior++;



            listaEstudio[i].estado = OCUPADO;

            break;
        }
    }
}

int dameMayorIdEstudio(eEstudio listaEstudio[], int tam)
{
    int i;
    int flag = 0;
    int aux = 0;

    for(i=0; i<tam; i++)
    {
        if(flag == 0 || listaEstudio[i].id>aux)
        {
            aux = listaEstudio[i].id;
            flag = 1;
        }
    }


    return aux;
}


