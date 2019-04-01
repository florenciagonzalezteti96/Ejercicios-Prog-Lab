//VECTORES.
#include <stdio.h>
#include <stdlib.h>
#define T 5 //defino un valor que no se modifica. pero no esta en memoria, asi que no toma tiempo del procesador.
void recibirVector(int vectorRecibido[], int cantidadElementos);

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

    recibirVector(numeros);
    mostrarVector(recibirVector(numeros));


    return 0;
}

void recibirVector(int vectorRecibido, T)
{
    int i;

    for(i=0; i<; i++)
    {
        printf("Ingrese un numero:");
    }

    return 0;
}

void mostrarVector (int vectorAMostrar);
{
    int i;

    for (i=0; i<5; i++)
    {
        printf("%d", vectorAMostrar[i]);
    }
    return 0;
}


