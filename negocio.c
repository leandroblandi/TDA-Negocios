/*-----------------------
 | negocio.c
 | Author: Leandro Blandi
 ------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "producto.h"
#include "negocio.h"

struct _Negocio
{
    char nombre[30];
    char direccion[60];
    int CUIT;
};


 /*--------------
 | Constructor
 ---------------*/

Negocio crearNegocio(char nombre[30], char direccion[60], int CUIT)
{
    Negocio negocio = malloc(sizeof(struct _Negocio));

    strcpy(negocio->nombre, nombre);
    strcpy(negocio->direccion, direccion);

    negocio->CUIT = CUIT;

    return negocio;
}


void mostrarNegocio(Negocio negocio)
{
    printf("\nNegocio:");
    printf("\n\t- Nombre: %s", negocio->nombre);
    printf("\n\t- Direccion legal: %s", negocio->direccion);
    printf("\n\t- CUIT: %d", negocio->CUIT);
}
