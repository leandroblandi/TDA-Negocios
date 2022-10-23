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

/// @pre: Nada
/// @post: Devuelve un struct _Producto con todos los atributos pasados por parametro
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

/// @pre: Nada
/// @post: Devuelve un struct _Producto personalizado
Producto crearProductoPorTeclado();

/// @pre: Nada
/// @post: Devuelve un struct _Producto filtrable
Producto inicializarProducto();


/// @pre: Producto producto debe existir y ser no-filtrable
/// @post: Muestra todos los datos del Producto Producto
void mostrarProducto(Producto producto);


/*---------------------------
 | Procedimientos de archivo
 ---------------------------*/

/// @pre: Deben existir Producto productos[] y ser no-filtrables
/// @post: Guarda todos sus datos de cada posicion en un .txt (se crea automaticamente)
void guardarProductosEnArchivo(Producto productos[]);

#endif // PRODUCTO_H_INCLUDED
