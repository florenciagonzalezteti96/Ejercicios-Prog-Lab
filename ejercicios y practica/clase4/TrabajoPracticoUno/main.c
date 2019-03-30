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

int pedirEntero (char []);

int main()
{
    //variable opcionesQueEligeElUsuario
    //variable seguir --> no preguntar

    int opcion;
    int primerOperando;
    int segundoOperando;
    int flag = 0
    char seguir = 's';

    do
    {
        printf("Elija una opcion: \n1.Ingreso de operandos \n2.Eleccion de las operaciones de realizar \n3.Informe de los resultados de las operaciones \n4.Cerrar calculadora\n");//se puede crear una funcion que cree el menu, o un printf para cada opcion o que quede asi
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
            printf("Ingrese un primer operando: ");
            scanf("%d", &primerOperando);

            printf("Ingrese un segundo operando: ");
            scanf("%d", &segundoOperando);

            break;

            case 2:
            printf("Estoy dando de baja ");
            break;

            case 3:
            printf("Estoy informando");
            break;

            case 4:
            printf("Estoy saliendo ");
            seguir='n';
            break;

            default:
            printf("\nNo ingreso una opcion valida\n");
            break;
        }

        //system("pause");
        //system("cls");

    }while(seguir=='s');



    return 0;
}



