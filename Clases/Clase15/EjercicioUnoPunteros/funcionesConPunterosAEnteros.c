#include "funcionesConPunterosAEnteros.h"
#include <stdio.h>
#include <stdlib.h>

void inicializarVectorConPunteros(int* pVector, int tam)
{
    int retorno = -1;
    int i;

    for(i=0; i<tam; i++)
    {
        *(pVector + i) = 0;
    }

}
int cargarVectorConPunteros(int* pVector, int tam, char mensajeDeIngreso[])
{
    int retorno = -1;
    int i;

    if(pVector != NULL)
    {
        for(i=0; i<tam; i++)
        {
            if(*(pVector+i)==0)
            {
                printf(mensajeDeIngreso);
                scanf("%d", pVector+i);
                if(*(pVector+i)==0)
                {
                    printf("NO INGRESE CEROS.");
                    printf(mensajeDeIngreso);
                    scanf("%d", pVector+i);
                }
            }
        }
        retorno = 0;
    }
    else
    {
        printf("No se puede cargar en el vector.");
    }

    return retorno;
}

int mostrarVectorConPunteros(int* pVector, int tam, char mensajeParaMostrar[])
{
    int i;
    int retorno = -1;

    if(pVector!=NULL)
    {
        printf(mensajeParaMostrar);
        for(i=0; i<tam; i++)
        {
            printf("%d\n", *(pVector+i));
        }
        retorno = 0;
    }
    else
    {
        printf("No se pueden mostrar los datos.");
    }

    return retorno;
}

int ordenarDeMayorAMenorVectorConPunteros(int* pVector, int tam)
{
    int retorno;
    int i;
    int j;
    int aux;

    if(pVector != NULL)
    {
        for(i=0;i<tam;i++)
        {
            for(j=i+1;j<tam;j++)
            {
                if(*(pVector+i) < *(pVector+j))
                {
                    aux = *(pVector+i);
                    *(pVector+i) = *(pVector+j);
                    *(pVector+j) = aux;
                }
            }
        }
        retorno = 0;
    }
    else
    {
        printf("No se pudo ordenar.");
        retorno = -1;
    }

    mostrarVectorConPunteros(pVector, tam, "Este es el vector ingresado, ordenado de forma descendente: \n");

    return retorno;
}
int ordenarDeMenorAMayorVectorConPunteros(int* pVector, int tam)
{
    int retorno;
    int i;
    int j;
    int aux;

    if(pVector != NULL)
    {
        for(i=0; i<tam; i++)
        {
            for(j=i+1; j<tam; j++)
            {
                if(*(pVector+i) > *(pVector+j))
                {
                    aux = *(pVector+i);
                    *(pVector+i) = *(pVector+j);
                    *(pVector+j) = aux;
                }
            }
        }
        retorno = 0;
    }
    else
    {
        printf("No se pudo ordenar.");
        retorno = -1;
    }

    mostrarVectorConPunteros(pVector, tam, "Este es el vector ingresado, ordenado de forma ascendente: \n");

    return retorno;
}

int buscarMaximoEnVectorConPunteros(int* pVector, int tam, int* maximo)
{
    int retorno = -1;
    int i;
    int mayorNumero;
    int flag = 0;

    if(pVector!=NULL)
    {
        for(i=0; i<tam; i++)
        {
            if(flag == 0 || *(pVector+i) > mayorNumero)
            {
                mayorNumero = *(pVector+i);
                flag = 1;
                *maximo = mayorNumero;
            }
        }
    retorno = *maximo;
    }
    else
    {
        printf("No se pudo realizar la busqueda.\n");
    }

    return retorno;
}

void mostrarMaximoConPunteros(int* pVector, int tam, int* maximo)
{
    int sePudo = buscarMaximoEnVectorConPunteros(pVector, tam, maximo);
    if(sePudo != -1)
    {
        printf("El maximo es: %d\n", *maximo);
    }
    else
    {
        printf("No se pudo!\n");
    }
}

int sacarPromedioEnVectorConPunteros(int *pVector, int tam)
{
    int retorno = -1;
    int acumulador = 0;
    float promedio;
    int i;

    if(pVector != NULL)
    {
        for(i=0; i<tam; i++)
        {
            acumulador = acumulador + *(pVector+i);
        }

        promedio = (float) acumulador/tam;

        printf("El promedio es %.2f\n", promedio);

        retorno = 0;
    }

    return retorno;
}

int buscarValorEnVector(int* pVector, int tam)
{
    int seEncontro = -1;
    int numeroAEncontrar;
    int* numeroEncontrado;
    int i;

    if(pVector != NULL)
    {
        printf("Ingrese un valor para encontrar: ");
        scanf("%d", &numeroAEncontrar);

        for(i=0; i<tam; i++)
        {
            if(numeroAEncontrar == *(pVector+i))
            {
                *numeroEncontrado = *(pVector+i);
                seEncontro = 0;
                break;
            }
        }
    }

    return seEncontro;
}

int mostrarVector(int* pVector, int tam)
{
    int estado = -1;
    int i;
    if(pVector != NULL)
    {
        for(i=0; i<tam; i++)
        {
            if((*(pVector+i)) != 0 )
            {
                printf("%d", *(pVector+i));
            }
        }
        estado = 0;
    }
    else
    {
        printf("El vector es nulo.");
    }

    return estado;
}

int borrarValorDeVectorConPunteros(int* pValor, int tam)
{
    int retorno = -1;
    int i;
    int numero;

    printf("Ingrese un valor para borrar: \n");
    scanf("%d", &numero);

    for(i=0;i<tam;i++)
    {
        if(numero == *(pValor + i))
        {
            *(pValor + i) = 0;
            break;
        }
    }


    return retorno;
}

