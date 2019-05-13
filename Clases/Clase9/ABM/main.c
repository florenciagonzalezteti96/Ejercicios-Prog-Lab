#include <stdlib.h>
#include "Empleado.h"

#define T 10
#define LIBRE 0
#define OCUPADO 1

//los empleados con mayor sueldo
//cantidad de carlos y que gane mas de 20,000

void modificarDatoDeEmpleado(eEmpleado lista[], int tam);
int buscarLegajo(eEmpleado lista[], int tam);
int menuDeOpciones(char[]);
float sueldoMaximo (eEmpleado lista[], int tam);
int darBaja (eEmpleado lista[], int tam);


int main()
{

    int opcion;

    eEmpleado lista[T];
    inicializarEmpleados(lista,T);


hardcodearDatosEmpleados(lista,6);
    do
    {
        opcion = menuDeOpciones("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Informar Datos.\n6.Salir\nElija una opcion: ");
        switch(opcion)
        {
            case 1:
                cargarEmpleado(lista,  T);
            break;
            case 2:
                darBaja(lista, T);
            break;
            case 3:
                modificarDatoDeEmpleado(lista, T);
            break;
            case 4:
                mostrarListaEmpleados(lista, T);
                break;
            case 5:
                //informar
                break;


        }
    }while(opcion!=6);



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

    for(i=0; i<tam; i++)
    {
        if(legajo == lista[i].legajo)
        {
            printf("Ingrese el nuevo sueldo bruto: ");
            scanf("%d", &nuevoDato);
            lista[i].sueldoBruto = nuevoDato;
            lista[i].sueldoNeto = nuevoDato * 0.85;
            //printf("El nuevo sueldo bruto es: %d\n", lista[i].sueldoBruto);
        }
    }

}
// darBajaAEmpleado
int darBaja (eEmpleado lista[], int tam)
{
    int empleado;
    int i;

    empleado = buscarLegajo(lista, tam);

    for(i = 0; i<tam; i++ )

    if(empleado == OCUPADO)
    {
        lista[i].estado = LIBRE;
    }
    else
    {
        printf("Este lugar ya esta LIBRE.");
    }

    return 0;
}
//**************************************************
int pedirLegajo(char mensajeDeIngreso[])
{
    int legajo;

    printf(mensajeDeIngreso);
    scanf("%d", &legajo);

    return legajo;
}
//**************************************************
int buscarLegajo(eEmpleado lista[], int tam) //-->NO! TIENE QUE DEVOLVER UN INDICE.
{
    int i;
    int legajoPedido;
    int encontroLegajo = 0;

    legajoPedido = pedirLegajo("Ingrese el legajo del empleado para modificar su sueldo bruto: \n");

    //printf("Ingrese el legajo del empleado para modificar su sueldo bruto: \n");
    //scanf("%d", &legajoPedido);

    for(i=0; i<tam; i++)
    {
        if(legajoPedido == lista[i].legajo)
        {
            encontroLegajo = 1;
        }
    }

    return encontroLegajo;
}
//*********************************************
float sueldoMaximo (eEmpleado lista[], int tam)
{
    float sueldo;
    char seguir = 's';

    printf("Ingrese un sueldo maximo a buscar: ");
    scanf("%f", &sueldo);

    printf("El sueldo ingresado a buscar es: %f.\nDesea ingresar otro sueldo? s\n", sueldo);
    scanf("%c", &seguir);

    if(seguir == 's')
    {
        printf("Ingrese un sueldo maximo a buscar: ");
        scanf("%f", &sueldo);
    }

    return sueldo;
}
