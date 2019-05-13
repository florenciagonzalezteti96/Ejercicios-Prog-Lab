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
    int aux;//creo una nueva variable
    int retorno;//variable retorno para la validacion
    retorno = 0;//declaro un valor inicial para la variable retorno
    printf("Ingrese una edad:");//pido un dato
    //sePudo = scanf("%d", &aux);//el scanf retorna un entero que indica si se pudo o no hacer la operacion. (0 es negativo)
    if(scanf("%d", &aux) == 1)//validacion --> si el scanf devuelve 1 no puede ingresar.
    {
        if(aux > 0 && aux <150)
        {
            *edad=aux;
            retorno = 1;
        }
    }

    return retorno;


}

int dividir (int datoUno, int datoDos, float *resultado)//EN EL PUNTERO SE GUARDA EL RESULTADO DE LA DIVISION
{
    float aux;//esta variable me sirve para guardar la operacion que luego se lo paso como dato al puntero.
    int retorno;
    retorno = 0;
    if(datoDos!=0)
    {
        aux=(float)datoUno/datoDos;//HAGO UN CASTEO DE UN INT A UN DATO FLOAT. SE LO INTERPRETA DE OTRA MANERA.
        printf("%f",aux);
        *resultado=aux;//TAMBIEN: *resultado=(float)datoUno/datoDos;
        retorno = 1;//PORQUE PUDO HACER LA DIVISION.
    }

    return retorno;

}


