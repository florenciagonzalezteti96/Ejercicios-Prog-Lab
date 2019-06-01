#include "Empleado.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    eEmpleado* unEmpleado;
    eEmpleado* segundoEmpleado;
    eEmpleado* tercerEmpleado;

    eEmpleado* listaDeEmpleados[10];

    int respuestaUno;
    int respuestaDos;
    int respuestaTres;

    unEmpleado = new_EmpleadoParametros(2000,"Florencia",1500);
    segundoEmpleado = new_EmpleadoParametros(2100,"Lucia",50000);
    tercerEmpleado = new_EmpleadoParametros(2500,"Luca",55000);

    listaDeEmpleados[0]=unEmpleado;
    listaDeEmpleados[1]=segundoEmpleado;
    listaDeEmpleados[2]=tercerEmpleado;


    respuestaUno = escribirEmpleadoEnBinario(unEmpleado);
    respuestaDos = escribirMuchosEmpleadosEnBinario(segundoEmpleado);
    respuestaTres = escribirMuchosEmpleadosEnBinario(tercerEmpleado);

    if(respuestaUno!=0 || respuestaDos!=0 || respuestaTres!=0)
    {
        printf("ERROR");
    }

    leerEmpleadoEnBinario(unEmpleado);
    leerEmpleadoEnBinario(segundoEmpleado);
    leerEmpleadoEnBinario(tercerEmpleado);




    return 0;
}
