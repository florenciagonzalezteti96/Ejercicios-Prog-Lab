#include <stdio.h>
#include <stdlib.h>

typedef struct
{

    int numero;
    char tipo;
    double importe;

}eFactura;

eFactura* crearEstructura(int numero, double importe, char tipo);

int main()
{
    eFactura PrimeraFactura = {25,23.2, 'A'};
    eFactura *pFactura;
    pFactura = &PrimeraFactura;

    //Ejercicio 1: mostrar un dato.

    //int x = pFactura.numero;-->NO FUNCIONA PORQUE pFactura ES UN ENTERO (puntero) NO UNA ESTRUCTURA.


    //me devuelve 4 porque es un entero: printf("%d", sizeof(eFactura*));
    printf("%d", sizeof(eFactura*));

    int x;

    x = (*pFactura).numero;//-->ACCEDO AL VALOR DE PFACTURA
    //printf("%d", x);

    return 0;
}

eFactura* crearEstructura(int numero, double importe, char tipo)
{
    //creo una estructura;
    eFactura PrimerFactura = {numero, importe, tipo};
    //creo un entero puntero, de la estructura
    eFactura *pFactura;
    //le asigno al puntero la direccion de memoria del array.
    pFactura = &PrimerFactura;

    return pFactura;
}
