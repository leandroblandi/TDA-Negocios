/*-----------------------
 | producto.h
 | Author: Leandro Blandi
 ------------------------*/

#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

struct _Producto;

typedef struct _Producto * Producto;


/*------------------------
 | Funciones individuales
 -------------------------*/

/// @pre:
/// @post:
Producto crearProducto(char nombre[30], float precio, int stock);

/// @pre:
/// @post:
Producto crearProductoPorTeclado();

/// @pre:
/// @post:
void mostrarProducto(Producto producto);


/*-----------------------
 | Funciones de arreglo
 ------------------------*/



#endif // PRODUCTO_H_INCLUDED
