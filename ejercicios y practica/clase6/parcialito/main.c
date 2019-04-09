#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void mostrarVectorDeCaracteres (char vector[], int cantidadElementos);
//void ordenarVector (char vector [], int cantidadElementos);

int main()
{
    char nombre[30];
    char apellido[30];
    char nombreAMostrar[30];
    char apellidoAMostrar[30];
    //int palabra = 0;
    //int i;

    printf("Ingrese su nombre:\n");
    gets(nombre);
    printf("Ingrese su apellido:\n");
    gets(apellido);

    strcpy(nombreAMostrar, nombre);
    strcpy(apellidoAMostrar, apellido);

    printf("Su nombre y apellido es: %s, %s", apellidoAMostrar, nombreAMostrar);

    /* Al principio está fuera
    for (i = 0; nombre[i] != '\0'; i++)
    {
        if (nombreAMostrar[i] == ' ')
        {
            palabra = 0; // Fuera de palabra
        }
        else
        {
            if (palabra)
            {
                // Ya estábamos dentro de una palabra
                strlwr(nombreAMostrar);
            }
            else
            {
                // Acabamos de entrar en una nueva palabra
                palabra = 1;
                strupr(nombreAMostrar);
            }
        }
    }*/



    /*for(i=0; nombreAMostrar[30]!='\0'; i++)
    {
        if(nombre[30-1]==' ')
        {
            strupr(nombreAMostrar);
        }
        else
        {
            strlwr(nombreAMostrar);
        }
    }

    printf("%s", nombreAMostrar);*/

    return 0;
}

/*void mostrarVectorDeCaracteres (char vector[], int cantidadElementos)
{
    int i;
    for(i=0;i<cantidadElementos;i++)
    {
        printf("%d", vector[i]);
    }
}*/

/*void ordenarVector (char vector [], int cantidadElementos)
{
    int i;
    int aux;

    for (i=0; vector[i]<1; i++)
    {
        aux = vector[i];
        strupr(aux);
    }


}*/

