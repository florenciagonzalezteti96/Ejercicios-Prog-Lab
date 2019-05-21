#include "estructuras.h"
#include <stdio.h>
#include <stdlib.h>

int mostrarUnDato(eDato* pDato, int posicion)
{
    int estado = -1;
    if(pDato != NULL)
    {
        printf("%d--%c", (pDato + posicion)->numero, (pDato + posicion)->letra);
        estado = 0;
    }

    return estado;
}

int mostrarTodosLosDatos(eDato* pDato, int tam)
{
    int i;
    int estado = -1;
    if(pDato != NULL && tam > 0)
    {
        for(i=0; i<tam; i++)
        {
            printf("%d -- %c\n", (pDato + i)->numero, (pDato + i)->letra);
        }
        estado = 0;
    }
    else
    {
        printf("FALLO");
    }
    return estado;
}

int ordenarPorLetra(eDato* pDato, int tam)
{
    int estado = -1;
    int i;
    int j;
    eDato aux;

    if(pDato != NULL && tam > 0)
    {
        for(i=0;i<tam;i++)
        {
            for(j=i+1;j<tam;j++)
            {
                if((pDato+i)->letra > (pDato+j)->letra)
                {
                    aux = *(pDato+i);
                    *(pDato+i) = *(pDato+j);
                    *(pDato+j) = aux;
                }
            }
        }
    estado = 0;
    }
    else
    {
        printf("FALLO.");

    }
    return estado;
}



