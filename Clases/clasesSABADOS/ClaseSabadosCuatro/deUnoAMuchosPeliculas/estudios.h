#ifndef ESTUDIOS_H_INCLUDED
#define ESTUDIOS_H_INCLUDED

typedef struct
{
    int id;
    int estado;
    char nombre[50];
    char pais[50];

    int anioDeCreacion;

} eEstudio;

int buscarEspacioLibreEstudio(eEstudio list[], int tam);
void cargarEstructuraEstudio(eEstudio list[], int tam);
int dameMayorIdEstudio(eEstudio list[], int tam);

#endif // ESTUDIOS_H_INCLUDED
