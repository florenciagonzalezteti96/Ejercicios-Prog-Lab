
#include <stdlib.h>
#include "Empleado.h"

#define T 10



void modificarSueldoBrutoDeEmpleado (eEmpleado lista[], int tam);
int menuDeOpciones(char[]);


int main()
{

    int indice;
    int opcion;

    eEmpleado lista[T];
    inicializarEmpleados(lista,T);


hardcodearDatosEmpleados(lista,4);
    do
    {
        opcion = menuDeOpciones("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Salir\nElija una opcion: ");
        switch(opcion)
        {
            case 1:
                cargarEmpleado(lista,  T);

            break;
            case 4:
                mostrarListaEmpleados(lista, T);
                break;
            case 3:
                modificarSueldoBrutoDeEmpleado(lista, T);
                break;

        }
    }while(opcion!=5);



    //inicializarEmpleados(lista, T);




    return 0;
}

int menuDeOpciones(char mensaje[])
{
    int opcion;
    printf("%s", mensaje);
    scanf("%d", &opcion);

    return opcion;
}

void modificarDatoDeEmpleado(eEmpleado lista[], int tam)
{
    int legajo;
    int nuevoDato;
    int i;

    printf("Ingrese el legajo del empleado para modificar su sueldo bruto: \n");
    scanf("%d", &legajo);
    /*if(scanf("%d", &legajo)==0)
    {
        printf("Dato ingresado es incorrecto, introduzca de nuevo el legajo: \n");
        scanf("%d", &legajo);
    }*/

    for(i=0; i<tam; i++)
    {
        if(legajo == lista[i].legajo)
        {
            printf("Ingrese el nuevo sueldo bruto: ");
            scanf("%d", &nuevoSueldoBruto);
            lista[i].sueldoBruto = nuevoDato;
            lista[i].sueldoNeto = nuevoDato * 0.85;
            //printf("El nuevo sueldo bruto es: %d\n", lista[i].sueldoBruto);
        }
    }
}
