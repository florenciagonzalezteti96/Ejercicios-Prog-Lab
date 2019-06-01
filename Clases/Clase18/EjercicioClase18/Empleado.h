typedef struct
{
    int legajo;
    char nombre[20];
    float salario;

} eEmpleado;

//eEmpleado* new_EmpleadoParametros(char* mensajeIngresoLegajo, char* mensajeIngresoNombre, float mensajeIngresoSalario);
eEmpleado* new_EmpleadoParametros(int, char*, float);
int escribirEmpleadoEnBinario(eEmpleado*);
int escribirMuchosEmpleadosEnBinario(eEmpleado*);
int leerEmpleadoEnBinario (eEmpleado*);
int leerMuchosEmpleadosEnBinario ();

