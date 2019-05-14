#include <stdio.h>
#include <stdlib.h>

//crear variable char, puntero char y piden al usuario que ingrese el char a traves del puntero.

int main()
{
    /*
    EJERCICIO 1:

    int *x = NULL;

    int v = 10;

    x = &v;

    printf("%d\n", v);//valor que contiene la varible v

    printf("%p\n", &v);//muestro la direcion de memoria de v

    printf("%p\n", &x);//direccion de memoria de x

    printf("%p\n", x);//muestro el valor de x

    printf("%d", *x);//muestro el valor al que APUNTA x*/

//***********************************************************************
    /*EJERCICIO 2

    char letra;

    char* pLetra;//REGLA DE ESTILO --> al declarar una variable de puntero se pone pVARIABLE A LA QUE APUNTA.

    pLetra = &letra;//le doy a pLetra un valor inicial, la direccion de memoria de la variable a la que apunta.

    printf("Ingrese una letra: \n");//pido una letra
    fflush(stdin);
    scanf("%c", pLetra);//guardo ese valor en el puntero y esto se transfiere a la direccion de memoria de letra
    printf("--%c--\n", letra);//muestro el valor que guarde en la direccion de memoria de la variable letra a traves del puntero.

    //**scanf("%c", pLetra);-->ROMPE PORQUE pLetra apunta a cualquier lugar (tiene valor basura).
    //***Siempre hay que asegurarnos que el puntero tenga un valor antes de usarlo para guardar valores.

    printf("valor de letra : %c\n", letra);//valor que contiene la varible letra

    printf("direccion de memoria de letra: %p\n", &letra);//muestro la direcion de memoria de letra

    printf("direccion de memoria de pLetra: %p\n", &pLetra);//direccion de memoria de pletra

    printf("valor de pLetra: %p\n", pLetra);//muestro el valor de pLetra

    printf("valor al que apunta pLetra: %c", *pLetra);//muestro el valor al que APUNTA pLetra*/

    //EJERCICIO 3:

    int p;
    int* q;
    int* r;

    p = 10;
    q = &p;

    r = q;

    printf("direccion de memoria de p : %p\n", &p);

    printf("direccion de memoria que guarda q: %p\n", q);

    printf("direcion de memoria que guarda r: %p\n", r);

    printf("valor al que apunta q: %d\n", *q);

    printf("valor al que apunta r: %d", *r);










    return 0;
}
