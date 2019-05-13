#include <stdio.h>
#include <stdlib.h>
//creo un tipo de dato por cada entidad que yo quiero representar.
//-->Estructura. diseño un nuevo tipo de dato que va a estar formado por distintos tipos de variables.
//Por convencion el nombre de la estructura es s+nombre.

typedef struct//defino el tipo de dato. En este caso es una estructura.
{
    //defino los campos o atributos que van a formar parte de la estructura. Solo las variables, excepto las cadenas de texto.
    int legajo;
    char nombre[20];//va a ser un vector porque el nombre tiene un largo.
    char sexo;
    float sueldoBruto;
    float sueldoNeto;

}   sEmpleado;//-->asi no tengo que poner struct en el main.


int main()
{
    //creo un dato del tipo de la estructura.
    sEmpleado unEmpleado; //unEmpleado-->variable de la estructura. guarda espacio en memoria para esta variable.
    sEmpleado otroEmpleado = {1100, "Jose", 'm', 18000, 12000};

    //puts(otroEmpleado.nombre);
    printf("Ingrese legajo: ");
    scanf("%d", &unEmpleado.legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    scanf("%s", &unEmpleado.nombre);
    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c", &unEmpleado.sexo);
    printf("Ingrese sueldo bruto: ");
    scanf("%f", &unEmpleado.sueldoBruto);

    unEmpleado.sueldoNeto = unEmpleado.sueldoBruto*0.85;

    otroEmpleado = unEmpleado; //--> no es necesario una variable auxiliar para pasar un valor de una variable a otra.

    printf("%d--%c--%c--%f--%f", unEmpleado.legajo, unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);


    return 0;
}
