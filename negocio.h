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


 /*--------
 | Getters
 ---------*/

Producto getProductos(Negocio negocio);


/*---------------------------------
 | Funciones individuales: Negocio
 ---------------------------------*/

/// @pre:
/// @post:
Negocio inicializarNegocio();

/// @pre:
/// @post:
Negocio crearNegocioPorTeclado();

/// @pre:
/// @post:
void mostrarNegocio(Negocio negocio);


/*----------------------------------
 | Funciones individuales: Producto
 ----------------------------------*/

/// @pre:
/// @post:
void cargarProductos(Negocio negocio);

/// @pre:
/// @post:
void modificarProducto(Negocio negocio, char nombreProducto[30]);

/// @pre:
/// @post:
void eliminarProducto(Negocio negocio, char nombreProducto[30]);

/// @pre:
/// @post:
void ordenarProductosPorPrecio(Negocio negocio);

/// @pre:
/// @post:
void ordenarProductosPorStock(Negocio negocio);


/*---------------------------
 | Procedimientos de archivo
 ---------------------------*/

 void guardarNegocioEnArchivo(Negocio negocio);



#endif // NEGOCIO_H_INCLUDED
