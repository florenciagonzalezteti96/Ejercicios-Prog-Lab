#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 5

void pedirCadena (char mensaje[], char cadena[], int tam);
void validarTamCadena (char mensajeError[], char cadena[], int tam);

int main()
{
    //vectores paralelos, cada componenete de cada vector es correlativo al mismo componente del otro vector.
    //matriz. array de cadenas. conjunto de lementos orgainzados por filas y columnas. COMO UNA TABLA.
    int legajos[T];
    float sueldoBruto[T];
    int sueldoNeto[T];
    char sexos[T];
    char nombres[T][20];//char nombres [T][20];T son las columnas de la matriz, cada nombre.
    int i;

    for(i=0; i<T; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);
        printf("Ingrese sueldo bruto: ");
        scanf("%f", &sueldoBruto[i]);
        printf("Ingrese sexo (m/f): ");
        fflush(stdin);
        scanf("%c", &sexos[i]);

        pedirCadena("Nombre: ", nombres[i], 20);//le paso la COLUMNA con el dato.
        sueldoNeto[i] = sueldoBruto[i]*0.85;
    }

    for(i=0; i<T; i++)
    {
        printf("%d--%s--%f--%c\n", legajos[i], nombres[i], sueldoBruto[i], sexos[i], sueldoNeto[i]);
    }


    return 0;
}

void pedirCadena (char mensaje[], char cadena[], int tam)
{
    printf("Ingrese %s", mensaje);
    fflush(stdin);
    scanf("%[^\n]", cadena);
    validarTamCadena(mensaje, cadena, tam);
}

void validarTamCadena (char mensajeError[], char cadena[], int tam)
{
    while (strlen(cadena)>tam)
    {
        printf("%s", mensajeError);
        fflush(stdin);
        scanf ("%[^\n]", cadena);
    }
}

