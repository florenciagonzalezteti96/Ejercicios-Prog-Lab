#include <stdlib.h>
#include <stdlib.h>
#include "Empleado.h"
#include <string.h>


void cargarEmpleado(eEmpleado lista[], int tam, eSector sectores[], int tamSec)
{
    int i;
    //int j;
    //int e;

    i = buscarLibre(lista, tam);

    if(i!=-1)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &lista[i].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &lista[i].sexo);
        //printf("Ingrese sueldo bruto: ");
        //scanf("%f", &lista[i].sueldoBruto);



        //guardo el id
        //pido la cantidad de horas

       //printf("Ingrese sector: 1. cont 2.sist 3.rrhh")->NO.

        lista[i].sueldoNeto =lista[i].sueldoBruto*0.85;
        lista[i].estado = OCUPADO;
    }
    else
    {
        printf("No hay espacio");
    }
}

int pedirSector (eSector sectores[], int tamSec)//pido ID sector
{
    //int i;
    int j;
    int sector;

    printf("Estos son los sectores de la empresa, seleccione un sector para guardar al empleado:\n");

    for(j=0; j<tamSec; j++)
    {
        //strcpy(sectoresDisponibles, sectores[i].descripcion);
        printf("%d \t %s\n", sectores[j].idSector, sectores[j].descripcion);
    }

    scanf("%d", &sector);

    return sector;
}

int pedirHorasTrabajadas ()//Pido horas trabajadas
{
    int horasTrabajadas;

    printf("Ingrese la cantidad de horas trabajadas por el empleado: \n");
    scanf("%d", &horasTrabajadas);

    return horasTrabajadas;
}

/*int calcularSueldoBruto (eEmpleado lista[], int tamLista, eSector sectores[], int tamSectores)
{
    int horas = pedirHorasTrabajadas;

//TERMINAR-




}*/




void mostrarListaEmpleados(eEmpleado lista[], int tam, eSector sectores[], int ts)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEmpleado(lista, sectores, ts);
        }

    }
}



void mostrarEmpleado(eEmpleado lista[], eSector sectores[], int ts)
{

    char descripcionSector[20];
    int i;

    for(i=0; i<ts; i++)
    {
        if(lista[i].idSector==sectores[i].idSector)
        {
            strcpy(descripcionSector, sectores[i].descripcion);
            break;
        }
    }

    printf("%4d %10s %c %4f %4f   %s\n", lista[i].legajo, lista[i].nombre, lista[i].sexo, lista[i].sueldoBruto, lista[i].sueldoNeto,descripcionSector);






}
int buscarLibre(eEmpleado lista[], int tam)
{
    int i;
    int index=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}
void inicializarEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = LIBRE;
    }
}

void hardcodearDatosEmpleados(eEmpleado lista[], int tam)
{
    int i;
    int legajos[]= {1,8,9,7,2,4};
    char nombres[][50]= {"Carlos","Maria","Carlos","Pedro","Carlos","Mateo"};
    char sexo[]= {'M','F','M','M','M','M'};
    float sueldosBruto[]= {22000,22000,15000,4000,21000,6000};
    int sector[]={1,2,3,1,2,2};

    //eFecha unaFecha = {22,04,2019};

    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        lista[i].estado = OCUPADO;
        lista[i].idSector = sector[i];



    }




}
void modificar(eEmpleado lista[], int tam, int legajo)
{

    int i;
    int loEncontro = 0;
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    for(i=0; i<tam; i++)
    {
        if(legajo == lista[i].legajo)
        {


            printf("Ingrese un nuevo sueldo bruto: ");
            scanf("%f", &lista[i].sueldoBruto);

            lista[i].sueldoNeto = lista[i].sueldoBruto*0.85;


            loEncontro = 1;
            break;//modifcar
        }

    }

    if(loEncontro==0)
    {
        printf("El dato no existe");
    }





}

void borrarEmpleado(eEmpleado lista[], int tam, int legajo)
{

    int i;
    int loEncontro = 0;
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    for(i=0; i<tam; i++)
    {
        if(legajo == lista[i].legajo)
        {

            lista[i].estado = LIBRE;


            loEncontro = 1;
            break;//modifcar
        }

    }

    if(loEncontro==0)
    {
        printf("El dato no existe");
    }

}

float buscarSueldoMaximo(eEmpleado lista[], int tam)
{
    float maximo;
    int flag = 0;
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO)
        {
            if(flag==0 || lista[i].sueldoBruto>maximo)
            {
                maximo = lista[i].sueldoBruto;
                flag = 1;
            }
        }

    }



    return maximo;

}
void mostrarEmpleadosSueldoMaximo(eEmpleado lista[], int tam)
{
    float maximo;
    int i;

    maximo = buscarSueldoMaximo(lista, tam);

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO && maximo == lista[i].sueldoBruto)
        {
            //mostrarEmpleado(lista[i]);

        }
    }

}

int contarCarlos(eEmpleado lista[], int tam)
{
    int contadorCarlos = 0;
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO)
        {
            if(stricmp(lista[i].nombre,"carlos")==0 && lista[i].sueldoBruto>20000)
            {
                contadorCarlos++;
            }
        }
    }

    return contadorCarlos;
}

void encontrarEmpleadosPorSector(eEmpleado lista[], int tamEmpleado, eSector sectores[], int tamSector)
{
    int i;
    int j;

    for(j = 0; j<tamSector; j++)

    {
        printf("Sector %d: %s.\n", sectores[j].idSector, sectores[j].descripcion);//FUNCIONA

        for(i = 0; i<tamEmpleado; i++)
        {
            if(sectores[j].idSector == lista[i].idSector)
            {
                mostrarEmpleado(lista, sectores, tamSector);//NO FUNCIONA.
            }
        }
    }
}

/*void contarEmpleadosPorSector(eEmpleado lista[], int tamEmpleado, eSector sectores[], int tamSector)
{
    eAuxiliar auxiliarcontador;

    int i;

    //transfiero valores de la estructura Sector a la estructura Auxiliar.

    for(i=0; i<tamSector; i++)
    {
        eAuxiliar auxiliarcontador[i].idSector = sectores[i].idSector;

    }*/






/*int buscarLegajo(eEmpleado lista[], int tam, int legajo)
{

}*/


