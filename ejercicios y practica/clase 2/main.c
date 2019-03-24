/*
Se ingresan numeros enteros (distintos de cero) hasta que el usuario quiera.
Informar:

a)cantidad de numeros ingresados.✓
b)cantidad de pares.✓// validar si es un numero par (mayor a cero), y calcular la cantidad.
c)suma de los positivos. ✓//validar si es positivo (menor a cero) y sumarlos.
d)promedio de los negativos. ✓//validar si es negativo (menor a cero) y sacar la cantidad para dividir para el promedio.
e)maximo y minimo. ✓//flags
f)el mas chico de los positivos.✓ //flags
g)el mas grande de los negativos.✓ //flags
h)cantidad de numeros entre el -10 y el 50.✓ //contador.
e)promedio total.✓ //contador total de numeros ingresados y suma de todos, y dividir.

***NO HACE FALTA VALIDAR QUE SEA UN NUMERO ENTERO, HAY QUE DECLARAR QUE ES ENTERO EN LA VARIABLE.

***si quiero usar una bandera con el if utilizo el 1 (true) y el 0 (verdadero). El "default" es verdadero. El flag es variable INT.
*** Para cortar el while utilizo un printf y un scanf.

*/



#include <stdio.h>
#include <stdlib.h>

int main()
{


    int numeroIngresado;//✓
    int contadorDePares=0;//✓
    int acumuladorNumerosPositivos=0;//✓
    int contadorDeNegativos=0;//✓
    int acumuladorNumerosNegativos=0;//✓
    int promedioNegativos;//✓
    int numeroMaximo;//✓
    int numeroMinimo;//✓
    int menorNumeroPositivo;//✓
    int mayorNumeroNegativo;//✓
    int contadorNumerosEntreMenosDiezYCincuenta=0;//✓
    int acumuladorNumerosIngresados=0;//✓
    int promedioTotal;//✓
    int contadorNumerosIngresados=0;//✓
    int flag=0;//✓
    char seguir='s';//✓

    while(seguir!='n')
    {
        printf ("Ingrese un numero:");
        scanf("%d", &numeroIngresado);

        //cantidad numeros pares:
        if(numeroIngresado%2==0)
        {
            contadorDePares=contadorDePares+1;
        }

        //suma de positivos
        if(numeroIngresado>0)
        {
            acumuladorNumerosPositivos=acumuladorNumerosPositivos+numeroIngresado;
            //menor numero positivo
            if(flag==0 || numeroIngresado<menorNumeroPositivo)
            {
                menorNumeroPositivo=numeroIngresado;
            }
        }

        //promedio de negativos
        if(numeroIngresado<0)
        {
            acumuladorNumerosNegativos=numeroIngresado+acumuladorNumerosNegativos;
            contadorDeNegativos=contadorDeNegativos+1;

            //mayor numero negativo
            if(flag==0 || numeroIngresado>mayorNumeroNegativo)
            {
                mayorNumeroNegativo=numeroIngresado;
            }
        }

        //maximo y minimo
        if(flag==0 || numeroIngresado>numeroMaximo)
        {
            numeroMaximo=numeroIngresado;
        }

        if(flag==0 || numeroIngresado<numeroMinimo)
        {
            numeroMinimo=numeroIngresado;
            flag=1;
        }

        if(numeroIngresado>-10 && numeroIngresado<50)
        {
            contadorNumerosEntreMenosDiezYCincuenta=contadorNumerosEntreMenosDiezYCincuenta+1;
        }

        acumuladorNumerosIngresados=numeroIngresado+acumuladorNumerosIngresados;
        contadorNumerosIngresados=contadorNumerosIngresados+1;

        printf ("Desea continuar ingresando datos? (s/n):");
        fflush(stdin);
        scanf (" %c", &seguir);

    } //while ( seguir != 'n' );//do while

    promedioNegativos=acumuladorNumerosNegativos/contadorDeNegativos;
    promedioTotal=acumuladorNumerosIngresados/contadorNumerosIngresados;

    printf("El numero ingresado es %d y la cantidad de numeros ingresados es %d\n", numeroIngresado, contadorNumerosIngresados);
    printf("La cantidad de numeros pares es %d\n", contadorDePares);
    printf("La suma de los positivos es %d\n", acumuladorNumerosPositivos);
    printf("El promedio de los negativos es %d\n", promedioNegativos);
    printf("El numero maximo es %d y el numero minimo es %d\n", numeroMaximo, numeroMinimo);
    printf("El numero positivo mas chico es %d\n", menorNumeroPositivo);
    printf("El numero negativo mas grande es %d\n", mayorNumeroNegativo);
    printf("La cantidad de numeros entre -10 y 50 es %d\n", contadorNumerosEntreMenosDiezYCincuenta);
    printf("El promedio total es %d\n", promedioTotal);

 return 0;//NO ELIMINAR.
}//int main()



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


/*while(seguir=='s')
    {
        printf ("Ingrese un numero:");
        scanf("%d", &numeroIngresado);
        printf ("Desea continuar ingresando datos? (s/n):");
        fflush(stdin);
        scanf (" %c", &seguir);

        contadorNumerosIngresados++;

    }*/



