#include "funcionespunteros.h"
void verSiAnda(void);
int cambiarValor (int dato);
int cambiarReferencia (int *dato);//los resultados se muestran por punteros!!
int pedirEdad(int *edad);
int dividir (int datoUno, int datoDos, float *resultado);


void verSiAnda(void)
{
    printf("Funciona");
}
int cambiarValor (int dato)
{
    dato=0;//no retorna nada
    printf("\nLugar valor dato %d ", &dato);
}

int cambiarReferencia (int *dato)
{
    *dato=0;
    printf("\nLugar valor dato %d ", &*dato);
}

int pedirEdad(int *edad)
{
    int aux;
    int retorno;
    retorno = 0;
    printf("Ingrese una edad:");
    //sePudo = scanf("%d", &aux);//el scanf retorna un entero que indica si se pudo o no hacer la operacion. (0 es negativo)
    if(scanf("%d", &aux) == 1)
    {
        if(aux > 0 && aux <150)
        {
            *edad=aux;
            retorno = 1;
        }
    }

    return retorno;


}

int dividir (int datoUno, int datoDos, float *resultado)
{
    int primerDato;
    int segundoDato;

    printf("Ingrese un primer dato");
    scanf("%d", &primerDato);
    printf("Ingrese un segundo dato");
    scanf("%d", &segundoDato);

    resultado=primerDato/segundoDato;
    scanf("%f", &resultado);

}


