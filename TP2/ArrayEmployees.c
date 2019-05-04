#include "ArrayEmployees.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void mostrarMenuPrincipal(int opcion, char opcionesEnElMenu[], sEmployee list[], int len)
{
    do
    {
        switch(opcion)
        {
        case 1:
        initEmployees(list, len);
        cargarDatosDeEmpleado(list, len);
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        }
    }
    while(opcion<6);
}

int initEmployees(sEmployee list[], int len)//INICIALIZO LOS ESPACIOS COMO LIBRES.
{
   //int retorno = 0;

    int i;
    for(i=0; i<len; i++)
    {
        list[i].isEmpty = 1;
    }

    //return retorno;
    return 0;

}

int buscarEspacioLibre(sEmployee list[], int len)
{
    int i;
    int retorno = 0;

    for(i=0;i<len;i++)
    {
        if(list[i].isEmpty == 1)
        {
            retorno = 1;
        }
    }

    return retorno;
}

void cargarDatosDeEmpleado(sEmployee list[], int len)
{
    int i = 0000;
    int j = buscarEspacioLibre(list, len);



    if(j != 0)
    {
        printf("Ingrese nombre de empleado/a: \n");
        fflush(stdin);
        gets(list[j].name);
        printf("Ingrese apellido de empleado/a: \n");
        fflush(stdin);
        scanf("%s", list[j].lastName);
        printf("Ingrese salario de empleado/a: \n");
        scanf("%f", &list[j].salary);
        printf("Ingrese el sector de empleado/a: \n");
        scanf("%d", &list[j].sector);
        i++;
        list[j].id = i;

        list[j].isEmpty = 0;

    }
    else
    {
        printf("No hay espacio");

    }


}





/*int addEmployee(sEmployee list[], int len, int id, char name[], char lastName[], float salary, int sector)
{
    int i;

    for(i=0; i<len; i++)
    {
        if(list[i].isEmpty == LIBRE)
        {
            strcpy(list[i].name, name);
            strcpy(list[i].lastName, lastName);
            strcpy(list[i].salary, salary);
            strcpy(list[i].sector, sector);
        }
    }
}*/




