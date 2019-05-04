#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"

#define len 1000


int main()
{
    int opcion;
    sEmployee list[len];

    mostrarMenuPrincipal(opcion, "Elija una opcion:\n1.Dar de alta a empleado/a\n2.Modificar datos de empleado/a\n3.Dar de baja a empleado\a\n4.Recibir informes\n5.Salir del sistema de ABM\n", list, len);

    return 0;
}

