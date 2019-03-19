#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int otroNumero;

    /*TIPOS DE CONVERSION:
     IMPLICITO:

     a = b;

     EXPLICITO:

     a = (int) b; --> convierte b a integral.*/


    int suma;
    float promedio; //se utiliza un float porque el promedio puede dar entero o decimal.

    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    printf("Ingrese otro numero: ");
    scanf("%d", &otroNumero);

    suma = numero + otroNumero;

    //promedio = suma/2; //da un numero entero y pierde la precicion decimal */

    promedio = (float)suma/2;

    printf("El promedio es de %.2f", promedio);//el %.2f muestra 2 decimales. EL NUMERO DESPUES DEL PUNTO ES LA CANTIDAD DE DECIMALES QUE SE MUESTRA.

    return 0;
}
