#include <stdio.h>
#include <stdlib.h>
#define T 3
#define LIBRE 0
#define OCUPADO -1


//creo un tipo de dato por cada entidad que yo quiero representar.
//-->Estructura. diseño un nuevo tipo de dato que va a estar formado por distintos tipos de variables.
//Por convencion el nombre de la estructura es s+nombre.

//void()-->es necesario antes de declarar la funcion, declarar la estructura.
//ESTRUCTURA
typedef struct//defino el tipo de dato. En este caso es una estructura.
{
    //defino los campos o atributos que van a formar parte de la estructura. Solo las variables, excepto las cadenas de texto.
    int legajo;
    char nombre[20];//va a ser un vector porque el nombre tiene un largo.
    char sexo;
    float sueldoBruto;
    float sueldoNeto;

}   sEmpleado;//-->asi no tengo que poner struct en el main.
//FUNCIONES
void mostrarEmpleado(sEmpleado miEmpleado);
//void cargarEmpleado(sEmpleado lista[]);NO
//void mostrarDatosEmpleado(sEmpleado lista);NO

void cargarEmpleado(sEmpleado lista[], int tam);
void mostrarDatosEmpleado(sEmpleado lista[], int tam);
void mostrarMenuOpciones(char mensajeInicio[], int opcion, sEmpleado lista[], int tam);
void inicializarEmpleado(sEmpleado lista[], int tam);
int buscarLibre(sEmpleado lista[], int tam);

int main()
{
    //creo un dato del tipo de la estructura.
    //sEmpleado unEmpleado; //unEmpleado-->variable de la estructura. guarda espacio en memoria para esta variable.
    //sEmpleado otroEmpleado = {1100, "Jose", 'm', 18000, 12000};
    //sEmpleado lista[T];
    //int opciones;

    //cargarEmpleado(lista, T);
    //mostrarDatosEmpleado(lista, T);
    //mostrarMenuOpciones("Elija una opcion:\n1.Buscar un lugar para guardar empleado.\n2.Inicializar lugares para guardar.\n3.Cargar un empleado.\n4.Mostrar datos.\n5.Salir.\n", opciones, lista, T);


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

void cargarEmpleado(sEmpleado lista[], int tam)
{
    int i;

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

void mostrarDatosEmpleado(sEmpleado lista[], int tam)//(sEmpleado unEmpleado)
{
    int i;

    for(i=0; i<T; i++)
    {
        mostrarEmpleado(lista[i]);
    }
}

/*void mostrarMenuOpciones(char mensajeInicio[], int opcion, sEmpleado lista[], int tam)
{
    int seguir;
    do
    {
        printf(mensajeInicio);
        scanf("%d", &opcion);

        switch(opcion)//menu de opciones
        {
            case 1:
            inicializarEmpleado(lista, tam);
                break;

            case 2:
            buscarLibre(lista, tam);
                break;

            case 3:
            cargarEmpleado(lista, tam);
                break;

            case 4:
            mostrarDatosEmpleado(lista, tam);
                break;

            case 5:
            seguir = 'n';
                break;

            default:
            printf("Opcion incorrecta.");
                break;

        }

    }while(seguir=='s');

}*/

void inicializarEmpleado(sEmpleado lista[], int tam)//Inicializo los empleados en -1
{
    int i;
    //SWAP?
    for(i=0; i<tam; i++)
    {
        i = -1;
    }
}

int buscarLibre(sEmpleado lista[], int tam)//Busco un espacio libre para guardar datos. Me devuelve si hay un espacio libre(devuelve el indice) o si no lo hay(devuelve -1)
{
    int i;
    int retorno = -1;

    for(i=0; i<tam; i++)
    {
        if(i == -1)
        {
            retorno = lista[i];//REVISAR. ME TIENE QUE DEVOLVER EL INDICE!
        }
    }

    return retorno;
}

int buscarUno(sEmpleado lista[], int tam, int espacioLibre)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(buscarLibre(lista, tam)!= -1)
        {

        }
    }
}
