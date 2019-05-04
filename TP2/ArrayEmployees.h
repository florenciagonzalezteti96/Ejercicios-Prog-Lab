typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

} sEmployee;

int initEmployees(sEmployee list[], int len);
void cargarDatosDeEmpleado(sEmployee list[], int len);
void mostrarMenuPrincipal(int opcion, char opcionesEnElMenu[], sEmployee list[], int len);
int buscarEspacioLibre(sEmployee list[], int len);
