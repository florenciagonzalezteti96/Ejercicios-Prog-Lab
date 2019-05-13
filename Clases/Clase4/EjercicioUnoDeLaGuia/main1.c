#include <stdio.h>
#include <stdlib.h>
//1. Ingresar 5 números y calcular su media

//float sacarPromedio (int suma, int cantidad);

int main()
{
    int nota;
    int acumuladorDeNotas=0;
    int contadorDeNotas=0;
    float promedioNotas;

    do{
        printf("Ingrese una nota:");
        scanf("%d", &nota);
    }
    while(contadorDeNotas<5);
    {
        acumuladorDeNotas=nota+acumuladorDeNotas;
        contadorDeNotas=contadorDeNotas+1;

    }

    promedioNotas=(float)acumuladorDeNotas/contadorDeNotas;

    return promedioNotas;



}

/*float sacarPromedio(int suma, int cantidad)
{
    float promedio;

    promedio=(float)suma/cantidad;

    return promedio;
}*/
