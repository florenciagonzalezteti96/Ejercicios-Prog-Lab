/*
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
//(crear una funcion para el menu de opciones, utilizar un switch)
//la idea del menu es mostar repetidamente el menu de opciones (usar un while/do while y un switch)
//
1. Ingresar 1er operando (A=x)//crear funcion para ingresar operandos//INGRESOS.H//SE USAN FLAGS. SE MUESTRA EL PRIMER
OPERANDO Y DESPUES VUELVO A CARGAR EL MENU Y MUESTRO EL PRIMER OPERANDO INGRESADO. Y PONGO LA OPCION PARA QUE INGRSE UN SEGUNDO

2. Ingresar 2do operando (B=y)//crear funcion para ingresar operandos//INGRESOS.H// TENGO QUE MOSTAR EL MENU DE NUEVO
CON LOS DOS OPERANDOS INGRESADOS.

3. Calcular todas las operaciones//se puede tomar como que hay que crear un menu aparte para las opciones a elegir.
a) Calcular la suma (A+B)//funcion suma
b) Calcular la resta (A-B)//funcion resta
c) Calcular la division (A/B)//funcion division
d) Calcular la multiplicacion (A*B)//funcion multiplicacion
e) Calcular el factorial (A!)//funcion de calculo de factorial del primer operando

4. Informar resultados //print f
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”

5. Salir

• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
*/

#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"

int main()
{
    int opcion;//Menu principal. Le muestra al usuario todas las opciones para ingresar o recibir datos.
    int flag = 0;//Bandera para validar si el usuario ingreso un primer operando o no.
    int flagDos = 0;//Bandera para validar si el usuario ingreso un segundo operando o no.
    int primerOperando;//primer numero ingresado.
    int segundoOperando;//segundo numero ingresado.
    float sumar;//variable que guarda el resultado de la funcion llamada sumarOperandos.
    float restar;//variable que guarda el resultado de la funcion llamada restarOperandos.
    float dividir;//variable que guarda el resultado de la funcion llamada dividirOperandos.
    float multiplicar;//variable que guarda el resultado de la funcion llamada multiplicarOperandos.
    float factorizarPrimerOperando;//variable que guarda el resultado de la funcion llamada calcularFactorialDeOperando.
    float factorizarSegundoOperando;//variable que guarda el resultado de la funcion llamada calcularFactorialDeOperando.
    char seguir = 's';//cierre de la funcion do while.

    do
    {
        printf("Elija una opcion: \n1.Ingresar primer operando. \n2.Ingresar segundo operando. \n3.Informe de las operaciones a realizar \n4.Informe de los resultados de las operacioes\n5.Salir de la calculadora.\n");//se puede crear una funcion que cree el menu, o un printf para cada opcion o que quede asi
        scanf("%d", &opcion);

        switch(opcion)//menu de opciones
        {
            case 1:
            //ingreso del primer operando
            printf("\nIngrese un primer operando:\n");
            scanf("%d", &primerOperando);
            flag = 1;

            printf("\nEl primer operando ingresado es %d\n", primerOperando);

                break;

            case 2:
            //ingreso del segundo operando
            printf("\nIngrese un segundo operando:\n");
            scanf("%d", &segundoOperando);
            flagDos = 1;

            printf("\nEl segundo operando ingresado es %d\n", segundoOperando);

                break;

            case 3:
            //validacion del ingreso de los operandos
            if(flag == 0)
            {
                printf("\nIngrese un primer operando!\n");
            }
            else
            {
                if(flagDos == 0)
                {
                    printf("\nIngrese un segundo operando!\n");
                }
                else
                {   //muestro las operaciones a realizar y calculo los resultados.
                    printf("\nLas operaciones a realizar son:\n");
                    printf("\nLa suma sera: %d + %d", primerOperando, segundoOperando);
                    printf("\nLa resta sera: %d - %d", primerOperando, segundoOperando);
                    printf("\nLa division sera: %d / %d", primerOperando, segundoOperando);
                    printf("\nLa multiplicacion sera: %d * %d", primerOperando, segundoOperando);
                    printf("\nEl factorial del primer operando sera: !%d", primerOperando);
                    printf("\nEl factorial del segundo operando sera: !%d", segundoOperando);

                    sumar = sumarOperandos(primerOperando,segundoOperando);
                    restar = restarOperandos(primerOperando,segundoOperando);
                    //validacion de la division (en caso de que el usuario haya ingresado 0 como divisor)
                    if(segundoOperando == 0)
                    {
                        printf("La division por cero no es posible. Ingrese un nuevo segundo operando!");
                    }
                    else
                    {
                        dividir = dividirOperandos(primerOperando,segundoOperando);
                    }

                    multiplicar = multiplicarOperandos(primerOperando,segundoOperando);
                    factorizarPrimerOperando = calcularFactorialDeOperando(primerOperando);
                    factorizarSegundoOperando = calcularFactorialDeOperando(segundoOperando);
                }
            }

                break;

            case 4:
            //informo los resultados finales.
            printf("\nInforme de los resultados:\nLa suma es %f\nLa resta es %f\nLa division es %f\nLa multiplicacion es %f\nEl factorial del primer operando es %f\nEl factorial del segundo operando es %f\n",sumar,restar,dividir,multiplicar,factorizarPrimerOperando,factorizarSegundoOperando);

                break;

            case 5:
            //salida del programa.
            printf("\nHa salido de la calculadora.\n");
            seguir='n';
                break;

            default:
            //ingreso de una opcion que no existe en el menu.
            printf("\nNo ingreso una opcion valida\n");
                break;
        }

    }while(seguir=='s');

    system("cls");

    return 0;
}



