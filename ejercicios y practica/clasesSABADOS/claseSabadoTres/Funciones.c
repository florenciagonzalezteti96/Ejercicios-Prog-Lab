#include "Funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int getPrecio(char *mensaje, float *precio);
/** \brief Esta funcion recibe un mensaje y un array, y devuelve un 0 o 1 dependiendo si el ATOF pudo ahcer la conversion o no.
 *
 * \param mensaje char*
 * \param precio float*
 * \return int
 *
 */
int getCodigo(char *mensaje, char *codigo);
/** \brief Esta funcion recibe un array de codigo (int) y devuelve una validacion (1 o 0)
 *
 * \param mensaje char*
 * \param codigo char*
 * \return int
 *
 */


int getPrecio(char *mensaje, float *precio)
{
    char ingreso[50];
    float aux;
    int retorno;
    printf(mensaje);
    scanf("%s", ingreso);
    aux = atof(ingreso); //recibe un ingreso y lo convierte a doble. si no puede devuelve 0
    if(aux>0)
    {
        *precio = aux;
        retorno = 1;
    }
    else
    {
        retorno = 0;
    }

    return retorno;
}

int validacionDeArray(float *valorIngresado, char *mensaje)
{
    int sePudo = 1;
    char cadenaCargada [20];//puntero memoria --> char [];
    int i;
    printf(mensaje);
    scanf("%s", cadenaCargada);
    //int cantidadCaracteres = strlen(cadenaCargada); --> strlen me da el largo de la cadena.
    for(i=0; i<strlen(cadenaCargada) ; i++)
    {
        if(cadenaCargada[i] < '0' || cadenaCargada[i] > '9')
        {
            sePudo = 0;
        }
    }
    if(sePudo == 1)
    {
        *valorIngresado = atoi (cadenaCargada);
    }

    return sePudo;
}

int getCodigo(char *mensaje, char *codigo)
{
    char ingreso[50];
    int retorno;
    printf(mensaje);
    scanf("%s", ingreso);
    if(strlen(ingreso)<=6)
    {
        strcpy(codigo, ingreso);
        retorno = 1;
    }
    else
    {
        retorno = 0;
    }

    return retorno;
}
