#include "Funciones.h"

int dameEdad(int *edad, char *mensaje);
/** \brief En esta funcion valido un entero y paso el mensaje sobre la validacion en el main.
 *
 * \param edad int* variable para guardar el ingreso.
 * \param mensaje char* variable para el texto de ingreso.
 * \return int informo si se logro la validacion (si se ingreso un entero o no).
 *
 */

int dameEdadDos(int *edad, char *mensaje);
/** \brief  En esta funcion se valida un entero y retorna 0 (no es un entero, o son letras mas un entero) o el entero ingresado.
 *
 * \param edad int* variable para guardar el ingreso.
 * \param mensaje char* recibe una cadena de caracteres.
 * \return int  0 o un entero.
 *
 */

int dameEdadTres(int *edad, char *mensaje);
/** \brief
 *
 * \param edad int*
 * \param mensaje char*
 * \return int
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
    *edad = atoi (cadenaCargada);//RECIBE UNA CADENA Y DEVUELVE UN ENTERO

    /*
    CON EL ATOI SE PUEDE VALIDAR SI ES UN NUMERO O NO.
    */


    return sePudo;
}
int dameEdadTres(int *edad, char *mensaje)
{
    int sePudo = 0;
    char cadenaCargada [20];//puntero memoria --> char [];
    int i;
    printf(mensaje);
    scanf("%s", cadenaCargada);
    //int cantidadCaracteres = strlen(cadenaCargada); --> strlen me da el largo de la cadena.
    for(i=0; i <strlen(cadenaCargada) ; i++)
    {
        if(cadenaCargada[i] < '0' || cadenaCargada[i] > '9' && cadenaCargada[i]=='\0')
        {
            sePudo == 0;
        }
    }
    if(sePudo == 1)
    {
        *edad = atoi (cadenaCargada);
    }

    return sePudo;
}

