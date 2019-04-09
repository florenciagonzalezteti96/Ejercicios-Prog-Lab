#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//strcpy-//-->solo puedo poner un valor literal o una variable. Aca muestra un valor basura porque no inicialice la variable en nada!

void pedirCadena (char mensaje[], char cadena[], int tam);
void validarTamCadena (char mensajeError[], char cadena[], int tam);

int main()
{
    //printf("%d", isspace(' ')); devuelve 0 si es falso, de otra manera es verdadero.
    char nombre[20];
    char apellido[20];
    char apellidoYNombre[41]="";//-->me aseguro que la variable esta vacia y no me tire basura.
    int i = 0;

    pedirCadena("nombre: ", nombre, 20);
    pedirCadena("apellido: ", apellido, 20);

    strcat(apellidoYNombre, apellido);
    strcat(apellidoYNombre, ", ");
    strcat(apellidoYNombre, nombre);

    //mayusculas y minusculas.
    //1. estandarizo todo a minusculas primero
    strlwr(apellidoYNombre);
    //selecciono la primera letra del apellido
    apellidoYNombre[0] = toupper(apellidoYNombre[0]);//toupper trabaja por valor.

    while (apellidoYNombre[i]!='\0')
    {
        if(apellidoYNombre[i]==' ')//if(isspace
        {
            apellidoYNombre[i+1]=toupper(apellidoYNombre[i+1]); //CADA VEZ QUE ENCUENTRE UN ESPACIO, PASA EL CARACTER SIGUIENTE A UNA MAYUSCULA.
        }

        i++;
    }

    puts(apellidoYNombre);

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
