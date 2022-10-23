/*-----------------------
 | producto.h
 | Author: Leandro Blandi
 ------------------------*/

#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

struct _Producto;

typedef struct _Producto * Producto;


 /*--------------
 | Constructor
 ---------------*/

/// @pre:
/// @post:
Producto crearProducto(char nombre[30], float precio, int stock);


/*------------------------
 | Funciones individuales
 -------------------------*/

/// @pre:
/// @post:
Producto crearProductoPorTeclado();

/// @pre:
/// @post:
Producto inicializarProducto();


/// @pre:
/// @post:
void mostrarProducto(Producto producto);


#endif // PRODUCTO_H_INCLUDED
