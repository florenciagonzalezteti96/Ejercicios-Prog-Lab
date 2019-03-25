#include <stdio.h>
#include <stdlib.h>
/*Prototipo o firma --> se usa mucho en lenguajes estructurados. Le ayuda al compilador a verificar la consistencia a la hora de
pasar el progrma
tipo de dato que devuelve
el nombre de la funcion (identificador) --> tiene que ser un verbo, por lo general verbo + sustantivo
y entre parentesis los parametros --> opcional. a veces queda mas prolijo poner que tipo de datos son

tipo_de_dato identificador ([parametros])

int sumarNumeros (int unNumero, int otroNumero); -->funcion que recibe algo y devuelve algo
{
    LOGICA DEL PROGRAMA.

    SI LA FUNCION DEVUELVE UN ENTERO TENGO QUE DECLARAR UN ENTERO Y QUE DEVUELVA UN ENTERO.

    int resultado;

    resultado = unNumero + otroNumero;

    return resultado; --> ultima funcion

    UNA VEZ QUE YA DECLARE LA FUNCION Y SU LOGICA, LA LLAMO EN LA FUNCION MAIN, PARA QUE APAREZCA EN LA CONSOLA.
}

*/

int sumarNumeros (int , int);

int main()
{
    int numeroUno;
    int numeroDos;
    int resultado;

    printf("Ingrese un numero:");
    scanf("%d", &numeroUno);
    printf("Ingrese otro numero:");
    scanf("%d", &numeroDos);

    resultado = sumarNumeros(numeroUno, numeroDos);

    return resultado;
}

int sumarNumeros (int unNumero, int otroNumero) //-->funcion que recibe algo y devuelve algo
{
    //LOGICA DEL PROGRAMA.

    //SI LA FUNCION DEVUELVE UN ENTERO TENGO QUE DECLARAR UN ENTERO Y QUE DEVUELVA UN ENTERO.

    int resultado;

    resultado = unNumero + otroNumero;

    return resultado; //--> ultima funcion

   // UNA VEZ QUE YA DECLARE LA FUNCION Y SU LOGICA, LA LLAMO EN LA FUNCION MAIN, PARA QUE APAREZCA EN LA CONSOLA.
}
