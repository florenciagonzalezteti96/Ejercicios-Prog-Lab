#include <stdio.h>
#include <stdlib.h>
void ordenarVector (int vector [], int cantidadElementos);
void mostrarVector (int vector [], int cantidadElementos);

int main()
{
    int vectorUno [10]={5,7,1,9,6,4,3,7,10,0};
    ordenarVector(vectorUno, 10);
    mostrarVector(vectorUno, 10);

    return 0;
}

void ordenarVector (int vector [], int cantidadElementos)
{
    int i;
    int j;
    int aux;

    for (i=0; i<cantidadElementos-1; i++)
    {
        for(j=i+1; j<cantidadElementos; j++)
        {
            printf("comparar i: %d, con j: %d\n", vector [i], vector [j]);
            if (vector [i]>vector [j])
            {
                aux = vector [i];
                vector [i] = vector [j];
                vector [j] = aux;
            }
        }
    }
}

void mostrarVector (int vector [], int cantidadElementos)
{
    int i;

    for(i=0; i<cantidadElementos; i++)
    {
        printf("%d", vector [i]);
    }
}
