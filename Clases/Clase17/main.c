#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*EJERCICIO 1.

    //crear puntero a entero

    int* pNumero;//->escrito asi, apunta a basura.

    //void es un tipo de dato que indica la ausencia de tipo. Pero un puntero a void, representa cualquier cosa.
    //void* representa algo muy generico, cualquier tipo de dato puede ser representado por void*.
    //malloc no sabe para que tipo de dato reserva memoria, me devuelve una direccion de memoria para una variable generica,
    //luego tengo que CASTEAR esa direccion de memoria para el tipo de dato que yo quiero usar. -->POLIMORFISMO

    //FUNCION --- MALLOC ---

    pNumero = (int*) malloc(sizeof(int));//le asigno este valor para que me guarde un entero.
    *pNumero = 99;
    printf("Heap->pNumero: %d\n", pNumero);
    printf("Stack->&pNumero: %d\n", &pNumero);
    printf("Valor->*pNumero: %d\n", *pNumero);

    //SI MALLOC NO ENCUENTRA ESPACIO DISPONIBLE EN MEMORIA, ME DEVUELVE UN NULL. POR ESTO HAY QUE VALIDAR SI ES NULL O NO.

    if(pNumero != NULL)
    {
        free(pNumero);
        //No tiene sentido hacer un free de un nulo porque ya el nulo es una no direccion, no apunta a nada!
        printf("Luego de hacer un free\n");
        printf("Heap->pNumero: %d\n", pNumero);
        printf("Stack->&pNumero: %d\n", &pNumero);
        printf("Valor->*pNumero: %d\n", *pNumero);//->este espacio en memoria que ya esta desreferenciado lo utiliza el sistema operativo para otra cosa o es basura.
    }

    //FUNCION --- CALLOC ---

    //calloc requiere el tamaño que necesito en memoria, y la cantidad de elementos para inicializarlo en 0.

    pNumero = (int*) calloc(sizeof(int),1);
    printf("Valor->*pNumero: %d\n", *pNumero);

    //para liberar espacio en HEAP utilizo la funcion --- FREE ---, para que en otra oportunidad en sistema operativo use ese segmento de memoria para guardar otra variable.
    //ayuda para inicializar en 0, puedo tambien llamar en una funcion miCalloc a un malloc y luego inicializar todos esos elementos en 0.

    */


    int* pNumeros;//creo un vector puntero apuntando al HEAP.
    int i;

    pNumeros = (int*) malloc(sizeof(int)*5); //multiplico el sizeof por la cantidad de elementos para los que necesito espacio.

    if(pNumeros != NULL)
    {
        for(i=0;i<5;i++)//pedirle al usuario que los cargue manualmente.
        {
            printf("Ingrese un numero: \n");
            scanf("%d", pNumeros+i);
        }
        for(i=0;i<5;i++)//valores hardcodeados
        {
            *(pNumeros + i) = i + 1;
        }
        for(i=0;i<5;i++)
        {
            printf("%d\n", *(pNumeros + i));
        }
    }




    return 0;
}


