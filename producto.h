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


/*----------
| Setters
-----------*/

void setNombreProducto(Producto producto, char nuevoNombre[30]);
void setPrecioProducto(Producto producto, float nuevoPrecio);
void setStockProducto(Producto producto, int nuevaCantidad);


/*----------
| Getters
-----------*/

char * getNombreProducto(Producto producto);
float getPrecioProducto(Producto producto);
int getStockProducto(Producto producto);


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


/*---------------------------
 | Procedimientos de archivo
 ---------------------------*/

void guardarProductosEnArchivo(Producto productos[]);

#endif // PRODUCTO_H_INCLUDED
