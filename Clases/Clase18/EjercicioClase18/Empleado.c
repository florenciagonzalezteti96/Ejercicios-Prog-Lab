#include "Empleado.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PATHB "D:\\florencia\\Clases\\Clase18\\EjercicioClase18\\Datos.dat"
#define PATHBDOS "D:\\florencia\\Clases\\Clase18\\EjercicioClase18\\DatosDos.dat"

eEmpleado* new_EmpleadoParametros(int legajo, char* nombre, float salario)//getter
{
    eEmpleado* empleadoRetorno;
    empleadoRetorno = (eEmpleado*)malloc(sizeof(eEmpleado));

    if(empleadoRetorno != NULL)
    {
        empleadoRetorno->legajo = legajo;
        strcpy(empleadoRetorno->nombre,nombre);
        empleadoRetorno->salario = salario;
    }

    return empleadoRetorno;
}

int escribirEmpleadoEnBinario(eEmpleado* unEmpleado)
{
    int retorno = -1;

    FILE* pUnEmpleado;//creo un archivo.

    int cantidad;//para chequear el fwrite.

    pUnEmpleado=fopen(PATHB,"wb");

    if(unEmpleado != NULL)//valido el puntero que recibe la funcion
    {
        if(pUnEmpleado == NULL)//valido que se pueda abrir el archivo o no.
        {
            printf("ERROR. 01!");
        }
        else
        {
            cantidad = fwrite(unEmpleado, sizeof(eEmpleado), 1, pUnEmpleado);//si lo pudo abrir guardo el fwrite en una variable para validar.
            if(cantidad != 1)
            {
                retorno = -1;
            }
            else
            {

                retorno = 0;
            }
        }
    }
    else
    {
        printf("ERROR. 02.");
    }

    fclose(pUnEmpleado);

    free(pUnEmpleado);

    return retorno;
}

int escribirMuchosEmpleadosEnBinario(eEmpleado* unEmpleado)
{
    int retorno = -1;

    FILE* pUnEmpleado;//creo un archivo.

    int cantidad;//para chequear el fwrite.

    pUnEmpleado=fopen(PATHBDOS,"ab");//uso el ab para cargar varios datos y que no pise los anteriores.

    if(unEmpleado != NULL)//valido el puntero que recibe la funcion
    {
        if(pUnEmpleado == NULL)//valido que se pueda abrir el archivo o no.
        {
            printf("ERROR. 03!");
        }
        else
        {
            cantidad = fwrite(unEmpleado, sizeof(eEmpleado), 1, pUnEmpleado);//si lo pudo abrir guardo el fwrite en una variable para validar.
            if(cantidad != 1)
            {
                retorno = -1;
            }
            else
            {
                retorno = 0;
            }
        }
    }
    else
    {
        printf("ERROR. 04.");
    }

    fclose(pUnEmpleado);

    free(pUnEmpleado);

    return retorno;
}

int leerEmpleadoEnBinario(eEmpleado* unEmpleado)
{
    int retorno = -1;

    FILE* pUnEmpleado;

    int cantidad;

    pUnEmpleado=fopen(PATHB,"rb");

    if(1)
    {
        if(pUnEmpleado == NULL)
        {
            printf("ERROR 05. No se puede abrir el archivo!");
        }
        else
        {
            cantidad = fread(unEmpleado, sizeof(eEmpleado), 1, pUnEmpleado);

            if(cantidad==1)
            {
                if(feof(pUnEmpleado))
                {
                    printf("ERROR 06.");
                }
                else
                {
                    printf("%d--%s--%f--", unEmpleado->legajo, unEmpleado->nombre, unEmpleado->salario);
                    retorno = 0;
                }
            }

        }

        fclose(pUnEmpleado);
    }
    else
    {
        printf("ERROR 07.");
    }

    return retorno;
}

int leerMuchosEmpleadosEnBinario()
{
    int retorno = -1;

    FILE* pUnEmpleado;

    eEmpleado unEmpleado;

    int cantidad;

    int i=0;

    pUnEmpleado=fopen(PATHB,"rb");

    if(1)
    {
        if(pUnEmpleado == NULL)
        {
            printf("ERROR 08. No se puede abrir el archivo !");
        }
        else
        {
            while(!feof(pUnEmpleado))
            {
                cantidad = fread(&unEmpleado, sizeof(eEmpleado), 1, pUnEmpleado);
                if(cantidad==1)
                {
                    printf("%d--%s--%f--", unEmpleado.legajo, unEmpleado.nombre, unEmpleado.salario);
                    i++;
                    retorno = 0;
                }
                else
                {
                    printf("ERROR 09");
                }
            }
        }

        fclose(pUnEmpleado);
    }
    else
    {
        printf("ERROR 10.");
    }

    free(pUnEmpleado);

    return retorno;
}
/*
int escribirEmpleadoEnTxt (eEmpleado* unEmpleado)
{
    int retorno = -1;

    FILE* pUnEmpleado;

    if(unEmpleado != NULL)
    {
        if((pUnEmpleado=fopen("UnEmpleado.txt","r")) == NULL)
        {
            printf("ERROR. No se puede abrir el archivo!");
        }
        if(feof(pUnEmpleado))
        {
            printf("ERROR.");
        }

        else
        {
            fprintf(pUnEmpleado, "%d",unEmpleado->legajo);
            fprintf(pUnEmpleado, "%s",unEmpleado->nombre);
            fprintf(pUnEmpleado, "%f",unEmpleado->salario);

            retorno = 0;
        }
    }

    fclose(pUnEmpleado);
}
    else
    {
        printf("ERROR.");
    }

    return retorno;
}*/



