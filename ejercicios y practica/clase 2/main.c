/*
Se ingresan numeros enteros (distintos de cero) hasta que el usuario quiera.
Informar:

a)cantidad de numeros ingresados.
b)cantidad de pares.// validar si es un numero par (mayor a cero), y calcular la cantidad.
c)suma de los positivos. //validar si es positivo (menor a cero) y sumarlos.
d)promedio de los negativos. //validar si es negativo (menor a cero) y sacar la cantidad para dividir para el promedio.
e)maximo y minimo. //flags
f)el mas chico de los positivos. //flags
g)el mas grande de los negativos. //flags
h)cantidad de numeros entre el -10 y el 50. //contador.
e)promedio total. //contador total de numeros ingresados y suma de todos, y dividir.

***NO HACE FALTA VALIDAR QUE SEA UN NUMERO ENTERO, HAY QUE DECLARAR QUE ES ENTERO EN LA VARIABLE.

***si quiero usar una bandera con el if utilizo el 1 (true) y el 0 (verdadero). El "default" es verdadero. El flag es variable INT.
*** Para cortar el while utilizo un printf y un scanf.

*/

/*
char seguir;

while(seguir=='s')
{
    printf ("lalalal);
    scanf (" %c", &seguir);
    printf("seguir?");


    FUNCION fflush

    printf ("lalalal);

    printf("seguir?");
    fflush(stdin); -->fflush limpia todos los datos ingresados en el buffer incluso el enter. stdin significa stand in.
    scanf (" %c", &seguir);

}

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroIngresado;
    int cantidadDePares;
    int sumaPositivos;
    int promedioNegativos;
    int numeroMaximo;
    int numeroMinimo;
    int menorNumeroPositivo;
    int mayorNumeroNegativo;
    int cantidadNumerosEntreMenosDiezYCincuenta;
    int promedioTotal;
    int flag=1;

    while(seguir=='s')
    {










        printf ("lalalal);
        fflush(stdin);
        scanf (" %c", &seguir);


    }


    return 0;//NO ELIMINAR.








