typedef struct
{
    int legajo;
    char nombre[20];
    float salario;

} eEmpleado;

//eEmpleado* new_EmpleadoParametros(char* mensajeIngresoLegajo, char* mensajeIngresoNombre, float mensajeIngresoSalario);
eEmpleado* new_EmpleadoParametros(int, char*, float);
int recibirYGuardarEmpleadoEnBinario (eEmpleado*);
int recibirYEscribirEmpleadoEnTxt (eEmpleado* unEmpleado);

