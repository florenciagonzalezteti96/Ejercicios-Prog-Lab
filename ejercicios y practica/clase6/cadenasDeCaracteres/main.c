#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra [1024];
    printf("Ingrese nombre y apellido:");
    scanf("%s", palabra);//--> para leer el vector.
    //scanf("%s", &palabra);-->NO. lo convierte en redundante.



    printf("%s", palabra);


    return 0;
}
