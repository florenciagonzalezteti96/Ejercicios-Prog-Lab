#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//scanf("%s", palabra);//--> para leer el vector, pero NO TOMA LOS ESPACIOS.
//scanf("%s", &palabra);-->NO. lo convierte en redundante.
//scanf("%[^\n]", palabra);--> que lea lo enter.
//gets(palabra);//-->equivalente a un scanf pero me toma los espacios. SOLO FUNCIONA EN WINDOWS.
//strcpy(palabra, "Hola");--> Copia lo que encuentra por ams que se desborda.
//strncpy(palabra,otraPalabra, 4--> coincide con el largo del destino (el destino en este caso es palabra); -->Copia la cantidad pedida Y sin desbordarse.

int main()
{
    char palabra [100];
    /*char otraPalabra[100];
    char palabra [50];
    int len;
    printf("Ingrese nombre y apellido:");

    fgets(palabra, 1024, stdin); //FUNCIONA EN LINUX Y WINDOWS.
    len = strlen(palabra);
    palabra[len]='\0';
    printf("La palabra es %s\nCantidad: %d", palabra, len);!! REVISION. */

    char palabra[100]="PHILipa";
    char otraPalabra [50];


    strcpy(otraPalabra, palabra);
    strlwr(otraPalabra);

    printf("%s--%s", palabra, otraPalabra);

    prin

    /*
    Pedir al usuario el nombre, el apellido (dos datos diferentes, NO SE TIENEN QUE MODIFICAR), una tercer variable que sea apellido y nombre (concatenados, y cada PRIMER LETRA de cada palabra en mayuscula).

    */

    return 0;
}
