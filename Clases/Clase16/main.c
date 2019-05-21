#include <stdio.h>
#include <stdlib.h>
#include "estructuras.h"


int main()
{

    eDato muchosDatos[3] = {{1,'C'}, {1,'B'}, {1,'A'}};


    int respuesta = ordenarPorLetra(muchosDatos, 3);

    if(respuesta != -1);

    int respuestaDos = mostrarUnDato(muchosDatos, 0);

    if(respuestaDos != -1);



    //printf("%d -- %c", pDato.nombre, pDato.letra); -->NO PORQUE pDato no es una estructura o un tipo de dato de una estructura.

    //printf("%d -- %c", *(pDato).numero, *(pDato).letra);

    //printf("%d -- %c", pDato->numero, pDato->letra);





    return 0;
}

