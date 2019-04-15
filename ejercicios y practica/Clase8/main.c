#include <stdio.h>
#include <stdlib.h>
#define T 3
//creo un tipo de dato por cada entidad que yo quiero representar.
//-->Estructura. diseño un nuevo tipo de dato que va a estar formado por distintos tipos de variables.
//Por convencion el nombre de la estructura es s+nombre.

//void()-->es necesario antes de declarar la funcion, declarar la estructura.

typedef struct//defino el tipo de dato. En este caso es una estructura.
{
    //defino los campos o atributos que van a formar parte de la estructura. Solo las variables, excepto las cadenas de texto.
    int legajo;
    char nombre[20];//va a ser un vector porque el nombre tiene un largo.
    char sexo;
    float sueldoBruto;
    float sueldoNeto;

}   sEmpleado;//-->asi no tengo que poner struct en el main.

void mostrarEmpleado(sEmpleado miEmpleado);
void cargarDatosDeLista(sEmpleado unEmpleado);
void mostrarDatosDeLista(sEmpleado unEmpleado);

int main()
{
    //creo un dato del tipo de la estructura.
    sEmpleado unEmpleado; //unEmpleado-->variable de la estructura. guarda espacio en memoria para esta variable.
    sEmpleado otroEmpleado = {1100, "Jose", 'm', 18000, 12000};
    sEmpleado lista[T];
    int i;

    cargarDatosDeLista(unEmpleado);
    mostrarDatosDeLista(unEmpleado);


    //otroEmpleado = unEmpleado; //--> no es necesario una variable auxiliar para pasar un valor de una variable a otra.

    //printf("%d--%s--%c--%f--%f\n", unEmpleado.legajo, unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);

    //void mostrarEmpleado(unEmpleado);
    //void mostrarEmpleado(otroEmpleado);

    return 0;
}

void mostrarEmpleado(sEmpleado unEmpleado)
{
    printf("%d--%s--%c--%f--%f\n", unEmpleado.legajo, unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);
}

void cargarDatosDeLista(sEmpleado unEmpleado)
{
    int i;
    sEmpleado lista[T];

    for(i=0; i<T; i++)
    {
        //puts(otroEmpleado.nombre);
        printf("Ingrese legajo: ");
        scanf("%d", &lista[i].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        scanf("%s", lista[i].nombre);
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &lista[i].sexo);
        printf("Ingrese sueldo bruto: ");
        scanf("%f", &lista[i].sueldoBruto);

        lista[i].sueldoNeto = lista[i].sueldoBruto*0.85;
    }
}

void mostrarDatosDeLista (sEmpleado unEmpleado)//(sEmpleado unEmpleado)
{
    int i;
    sEmpleado lista[T];

    for(i=0; i<T; i++)
    {
        mostrarEmpleado(lista[i]);
    }
}

