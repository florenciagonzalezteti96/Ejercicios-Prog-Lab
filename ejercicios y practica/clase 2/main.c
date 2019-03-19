#include <stdio.h>
#include <stdlib.h>
/*WHILE y do while --> para cuando no se sabe la cantidad de iteraciones que se lleva a cabo.
int main()
{
   int i=0;
    while(i<10)
    {
        printf("El numero es %d", i);//SI QUIERE MOSTRAR DEL UNO AL DIEZ printf("El numero es %d", i+1);
        // el \n es como un enter, pero el \t es una tabulacion, ingresa espacios.. el \a hace sonar el speaker!
        printf("\n Este es el valor de i: %d", i);
        i++;
    }
    return=0;
}*/
//FOR --> Para una cantidad determinada de iteraciones.
int main()
{
    int i;
    for (i=0;i<10;i++)
    {
        printf("El numero es %d", i+1);

    }

    /*FOR INFINITO
    1)
    int i=10;
    for (;;)
    {
        printf("El numero es %d", i);
        i--;
        if(i==2)
        {
            break;
        }
    2)
    for (;;)
    {
        printf("El numero es %d", i);
        i--;
        if(i==2)
        {
            continue; //NO MUESTRA EL 2 SINO QUE CONTINUA CON LA SIGUIENTE ITERACION.
        }



        */



    return=0;
}
