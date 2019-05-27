#include <stdio.h>
#include <stdlib.h>
#define T 5

typedef struct
{
    int legajo;
    char nombre[25];
    float sueldo;

}eEmpleado;

int main()
{
    eEmpleado* unEmpleado;
    unEmpleado = (eEmpleado*)calloc(sizeof(eEmpleado),1);

    printf("%d--%s--%f", unEmpleado->legajo, unEmpleado->nombre, unEmpleado->sueldo);

    return 0;
}

eEmpleado* new_Empleado()
{
    eEmp
}
