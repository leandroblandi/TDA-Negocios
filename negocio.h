/*-----------------------
 | negocio.h
 | Author: Leandro Blandi
 ------------------------*/

#ifndef NEGOCIO_H_INCLUDED
#define NEGOCIO_H_INCLUDED

struct _Negocio;

typedef struct _Negocio * Negocio;


 /*--------------
 | Constructor
 ---------------*/

/// @pre:
/// @post:
Negocio crearNegocio(char nombre[30], char direccion[60], int CUIT);

/// @pre:
/// @post:
void mostrarNegocio(Negocio negocio);

#endif // NEGOCIO_H_INCLUDED
