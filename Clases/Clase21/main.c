#include <stdio.h>
#include <stdlib.h>
void  mostrar(char*);
void otroMostrar(char*);
int get_Int(char*);
int incrementarNumero();

int main()
{
    void (*pFunc)(char*);

    pFunc = mostrar;

    //pFunc = &mostrar; --> no hace falta usar el ampersand, porque la funcion ya es una direccion de memoria en si!

    pFunc("HOLA");

    pFunc = otroMostrar;

    pFunc("CHAU");

    pFunc = get_Int;
    pFunc("Ingrese un numero:\n");




    return 0;
}

void mostrar(char* mensaje)
{
    printf("%s\n", mensaje);
}

void otroMostrar(char* mensaje)
{
    printf("%s\n", mensaje);
}

int get_Int(char* mensaje)
{
    int number;
    printf(mensaje);
    scanf("%d", &number);

    return number;
}

int incrementarNumero()
{
    int numero;

    numero++;

    printf("\nEl nuevo numero es: %d", numero);

    return 0;
}



