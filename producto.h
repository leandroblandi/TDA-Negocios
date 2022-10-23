/*-----------------------
 | producto.h
 | Author: Leandro Blandi
 ------------------------*/

#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

struct _Producto;

typedef struct _Producto * Producto;

/// @pre:
/// @post:
Producto crearProducto(char nombre[30], float precio, int stock);

/// @pre:
/// @post:
void mostrarProducto(Producto producto);

#endif // PRODUCTO_H_INCLUDED
