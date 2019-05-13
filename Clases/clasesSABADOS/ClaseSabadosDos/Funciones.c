#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"

int dameEdad(int *edad, char *mensaje);
/** \brief En esta funcion valido un entero y paso el mensaje sobre la validacion en el main.
 *
 * \param edad int* Variable para guardar el ingreso.
 * \param mensaje char* Variable para el texto de ingreso.
 * \return int Informo si se logro la validacion (si se ingreso un entero o no).
 *
 */

int dameEdadDos(int *edad, char *mensaje);
/** \brief  En esta funcion se valida un entero y retorna 0 (no es un entero, o son letras mas un entero) o el entero ingresado.
 *
 * \param edad int* Variable para guardar el ingreso.
 * \param mensaje char* Recibe una cadena de caracteres.
 * \return int  Devuelve 0 o un entero.
 *
 */

int dameEdadTres(int *edad, char *mensaje);
/** \brief En esta funcion se valida si se ingreso un entero o una cadena de caracteres, todos enteros. Se usa strlen para verificar si todos los caracteres son enteros o no.
 *
 * \param edad int* Entero o cadena ingresada.
 * \param mensaje char* Mensaje para el ingrso de la cadena o del valor.
 * \return int Informa si se pudo realizar la validacion (un entero o cadena de SOLO enteros) o si no se pudo (existe una letra o son todas letras)
 *
 */

int dameEdadConContador(int *edad, char *mensaje, int contadorDeIntentos);
/** \brief Esta funcion me permite realizar una validacion de la cadena de caracteres ingresados (que sean todos enteros) y agregar un contador de intentos para ingresar los valores.
 *
 * \param edad int* valores ingresados
 * \param mensaje char* mensaje que indica el ingreso de valores al usuario
 * \param contadorDeIntentos int variable que indica el numero de intentos que tiene el usuario para ingresar.
 * \return int Regresa 0 si llego al limite de intentos o si el ingreso no fue valido, 1 si llego a ingresar antes del limite o si el dato ingresado se pudo validar.
 *
 */



//-------------------------------------------
int dameEdad(int *edad, char *mensaje)
{
    int sePudo = 0;
    int aux;
    printf(mensaje);
    sePudo = scanf("%d", &aux);//para asignar un valor

    if(sePudo == 1)//FORMA DE VALIDAR SI SE PUDO CON EL SCAN F
    {
        *edad = aux;//retornar un valor

        //edad = aux; --> NO FUNCIONA.
    }

    return sePudo;

}

int dameEdadDos(int *edad, char *mensaje)
{
    int sePudo = 1;
    char cadenaCargada [20]; //puntero memoria --> char [];
    printf(mensaje);
    sePudo = scanf("%s", cadenaCargada);//para asignar un valor
    *edad = atoi (cadenaCargada);//RECIBE UNA CADENA Y LA CONVIERTE A UN ENTERO --> int atoi(const char *str). Si no pudo convertir a un entero devuelve 0

    /*
    CON EL ATOI SE PUEDE VALIDAR SI ES UN NUMERO O NO.
    */


    return sePudo;
}

int dameEdadTres(int *edad, char *mensaje)
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
        *edad = atoi (cadenaCargada);
    }

    return sePudo;
}
int dameEdadConContador(int *edad, char *mensaje, int intentos)
{
    int retorno;
    int seCargo;
    int contadorDeIntentos = 0;

    do
    {
        seCargo = dameEdadTres(edad, mensaje);//llamo a la funcion para validar la cadena de caracteres.
        contadorDeIntentos++;
    }
    while(seCargo == 0 && contadorDeIntentos<intentos);

    if(contadorDeIntentos>intentos || seCargo == 0)
    {
        retorno = 0;
    }
    else
    {
        retorno = 1;
    }

    return retorno;
}
