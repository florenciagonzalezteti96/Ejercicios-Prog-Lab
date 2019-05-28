#include "Empleado.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    eEmpleado* unEmpleado;
    int respuestaUno = 0;

    FILE* pUnEmpleado;

    unEmpleado = new_EmpleadoParametros(2000,"Florencia",1500);

    respuestaUno = recibirYGuardarEmpleadoEnBinario(unEmpleado);

    if(respuestaUno != -1);
    {
        while(!feof(pUnEmpleado))
        {
            printf("%d--%s--%f--", unEmpleado->legajo, unEmpleado->nombre, unEmpleado->salario);
        }
    }


    return 0;
}
