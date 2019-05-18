#include <stdio.h>
#include <stdlib.h>

int cargarVectorConPunteros(int* pVector, int tam, char mensajeDeIngreso[]);
int mostrarVectorConPunteros(int* pVector, int tam, char mensajeParaMostrar[]);
int buscarMaximoEnVectorConPunteros(int* pVector, int tam, int* maximo);
void mostrarMaximoConPunteros(int* pVector, int tam, int* maximo);

int main()
{
    int vector[5];
    int* pVector;
    int maximo;

    pVector = vector;

    cargarVectorConPunteros(pVector, 5, "Ingrese un valor: \n");
    mostrarVectorConPunteros(pVector, 5, "Este es el vector: \n");
    mostrarMaximoConPunteros(pVector, 5, &maximo);

    return 0;
}

/*int inicializarVector(int vector[], int tam)
{
    int i;
    int retorno = -1;
    for(i=0; i<tam; i++)
    {
        vector[i] = 0;
        retorno = 0;
    }

    return retorno;
}*/


int cargarVectorConPunteros(int* pVector, int tam, char mensajeDeIngreso[])
{
    int retorno = -1;
    int i;

    if(pVector != NULL)
    {
        for(i=0; i<tam; i++)
        {
            //if(*(pVector+i) == 0)
                printf(mensajeDeIngreso);
            scanf("%d", pVector+i);
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

int ordenarVectorConPunteros(int vector[], int tam)
{
    int retorno = -1;



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
        printf("No se pudo realizar la busqueda.");
    }

    return retorno;
}

void mostrarMaximoConPunteros(int* pVector, int tam, int* maximo)
{
    int sePudo = buscarMaximoEnVectorConPunterosPosta(pVector, tam, maximo);
    if(sePudo != -1)
    {
        printf("El maximo es: %d", *maximo);
    }
    else
    {
        printf("No se pudo!");
    }
}

int buscarPromedioEnVectorConPunteros(int vector[], int tam)
{
    int retorno = -1;

    return retorno;
}

int borrarValorDeVectorConPunteros(int vector[], int tam)
{
    int retorno = -1;
    return retorno;
}

