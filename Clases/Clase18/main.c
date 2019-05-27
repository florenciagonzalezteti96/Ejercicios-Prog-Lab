#include <stdio.h>
#include <stdlib.h>
//#define PATH "D:\\misDatos.txt"//si yo no especifico el directorio, me crea el archivo en la misma carpeta en la que esta trabajando el programa.
//ARCHIVOS.

int main()
{
    /*EJERCICIO 1

    FILE* miArchivo;

    char miNombre[20]="Florencia";

    miArchivo = fopen(PATH, "w");//si fopen logra abrir el archivo me devuelve el puntero al archivo, si no me devuelve NULL.

    if(miArchivo != NULL)
    {
        fprintf(miArchivo,"Su nombre es: %s", miNombre);//EL PATH SOLO ES NECESARIO PARA EL FOPEN!!
        //puedo formatear el archivo como en el printf
        //si el archivo ya existe, lo pisa y copia la nueva informacion.
    }
    else
    {
        printf("ERROR.");
    }

    fclose(miArchivo);
    **********************************************************************************************
    */

    /*EJERCICIO2


    FILE* miArchivo;

    char miNombre[30]="Florencia";

    miArchivo = fopen("D:\\misDatos.txt", "r");//si fopen logra abrir el archivo me devuelve el puntero al archivo, si no me devuelve NULL.

    fgets(miNombre, 30, miArchivo);//lee una linea del archivo.
    fclose(miArchivo);

    printf("%s", miNombre);//para mostrar lo que lei del archivo



    fclose(miArchivo);

    *********************************************************************************

    */

    /*

    EJERCICIO 3

    FILE* miArchivo;//creo el puntero a archivo

    char miNombre[30]="Florencia";//ingreso datos

    //ESCRITURA
    miArchivo = fopen("D:\\misDatos.txt", "w");
    fprintf(miArchivo,"Su nombre es:   \n%s", miNombre);

    //LECTURA
    miArchivo = fopen("D:\\misDatos.txt", "r");--> el modo "r" es de lectura.
    fgets(miNombre, 30, miArchivo);//muestra "su nombre es"
    fgets(miNombre, 30, miArchivo);//muestra "florencia"

    fclose(miArchivo);

    printf("%s", miNombre);

    **********************************************************************************

    */

    FILE* miArchivo;

    char miNombre[30]="Florencia";

    miArchivo = fopen("D:\\misDatos.txt", "r");

    while(!feof(miArchivo))
    {
        fgets(miNombre,30,miArchivo);
        printf("%s", miNombre);
    }

    fclose(miArchivo);

    return 0;
}
