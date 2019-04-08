//VECTORES.
#include <stdio.h>
#include <stdlib.h>
#define T 5 //defino un valor que no se modifica. pero no esta en memoria, asi que no toma tiempo del procesador.
void recibirVector(int vectorRecibido[], int cantidadElementos);
void mostrarVector (int vectorRecibido[], int cantidadElementos);
int buscarMaximo (int vectorRecibido[], int cantidadElementos);
int devolverEntero (int vectorRecibido[], int cantidadElementos, int valor);

int main()
{
    //que reciba el vector y lo cargue y otra funcion que reciba este vector y lo muestre.

    //**PRIMERO DEFINO DE QUE TIPO SON LAS VARIABLES DEL VECTOR. (TODOS ENTEROS, TODOS FLOAT, ETC)
    //int numeros [5]; //vector [cantidad de elementos en ese vector];. el sistema operativo multiplica la cantidad de bytes por la cantidad de elementos.
    //**los vectores trabajan con indices o subindices que empieza en el valor 0 y termina en la cantidad de elementos menos 1.
    //numeros [2]=23;->variable escalar, tiene un valor especifico.
    //**utilizo un for para mostrar los elementos porque se cuantos elementos son
    //printf("%d", numeros);
    //int i;
    //printf("%d--%d", numeros, &numeros);//--> me muestra lo mismo, la direccion de memoria porque el vector lo que guarda es la direccion de memoria del primer bit.
    /*for (i=0; i<5; i++)//secuencial. le asigno valor a cada elemento del vector, en secuencia.
    {
        printf("Ingrese un numero:");
        scanf("%d", &numeros [i]);
    }
    for (i=0; i<5; i++)//secuencial//muestro la secuencia del vector.
    {
        printf("%d", numeros[i]);
    }
    printf("%d", numeros [2]);*/
    int numeros [T];
    int i;
    int maximo;
    int valorParaBuscar;
    int indiceDelValorParaBuscar;

    recibirVector(numeros, T);
    mostrarVector(numeros, T);

    maximo = buscarMaximo(numeros, T);

    printf("\n el maximo es %d", maximo);

    indiceDelValorParaBuscar=devolverEntero(numeros, T, valorParaBuscar);

    printf("\nEl indice del valor ingresado para buscar es %d", indiceDelValorParaBuscar);





    return 0;
}

void recibirVector(int vectorRecibido [], int cantidadElementos)
{
    int i;

    for(i=0; i<cantidadElementos; i++)
    {
        printf("Ingrese un numero:");
        scanf("%d", &vectorRecibido[i]);

    }

}

void mostrarVector (int vectorAMostrar[], int cantidadElementos)
{
    int i;

    for (i=0; i<cantidadElementos; i++)
    {
        printf("%d", vectorAMostrar[i]);
    }

}

int buscarMaximo (int vectorRecibido[], int cantidadElementos)
{
    int i;
    int bandera = 0;
    int maximo;

    for (i=0; i<cantidadElementos; i++)
    {
        if(bandera == 0 || vectorRecibido[i]>maximo)
        {
            maximo = vectorRecibido[i];

            bandera = 1;

        }

    }

    return maximo;

}

int devolverEntero (int vectorRecibido[], int cantidadElementos, int valor)
{
    int i;
    int valorABuscar;

    for(i=0; i<cantidadElementos; i++)//ingresamos valores al vector.
    {
        printf("Ingrese un numero:");
        scanf("%d", &vectorRecibido[i]);

        if(valorABuscar==vectorRecibido[i])
        {
            printf("\nNo se encontro el numero\n");
        }
        else{}
    }

    return &valorABuscar;

}




