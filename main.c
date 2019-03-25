#include <stdio.h>
#include <stdlib.h>
/*
funcion main que pida nota (un entero) entre 0 y 10

1. prototipo
2. implementacion
3. usar la funcion


si retorna 1 aprobo si retorna 0 desaprobo

ejercicio uno
pedir 5 notas (pedirNota)
cantidad de aprobados;
promedio de notas de aprobados y promedio de notas de no aprobados
nota minima para aprobar es 6

*/
int pedirNota (void);//

float sacarPromedio (int suma, int cantidad);//

int aprobarMateria (int notaMinima, int nota);//***

void ejercicioUno (void);

int main()
{
    ejercicioUno();//llamo a la funcion

}

int pedirNota (void)//-->CUANDO LA FUNCION TIENE COMO PARAMETRO EL VOID IGUAL LLEVA EL RETURN.//pedir 5 notas
{
    int nota;
    int contadorDeNotasIngresadas=0;

    do
    {
        printf("Ingrese una nota del uno al diez:");
        scanf("%d", &nota);
    }
    while(contadorDeNotasIngresadas<5);

    contadorDeNotasIngresadas++;
    return nota;

}

float sacarPromedio(int suma, int cantidad)
{
    float promedio;

    promedio=(float)suma/cantidad;

    return promedio;
}

int aprobarMateria (int notaMinima, int nota)
{
    int notaMinima=6;
    int contadorCantidadDeAprobados=0;
    int acumuladorNotasAprobadas;
    int contadorCantidadDeDesaprobados=0;
    int acumuladorNotasDesaprobadas;

    if(nota>=notaMinima)
    {
        contadorCantidadDeAprobados++;
        acumuladorNotasAprobadas=nota+acumuladorNotasAprobadas;
    }
    else{
        contadorCantidadDeDesaprobados++;
        acumuladorNotasDesaprobadas=nota+acumuladorNotasDesaprobadas;
    }

    promedioDeAprobados=sacarPromedio(acumuladorNotasAprobadas, contadorCantidadDeAprobados);// promedio de aprobados
    promedioDeDesaprobados=sacarPromedio(acumuladorNotasDesaprobadas, contadorCantidadDeDesaprobados);// promedio de desaprobados

    return 0;

}

void ejercicioUno (void)
{

}
