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

/// @pre: Nada
/// @post: Devuelve un struct _Negocio con todos los atributos ingresados por parametro
Negocio crearNegocio(char nombre[30], char direccion[60], int CUIT);


 /*--------
 | Getters
 ---------*/

Producto getProductos(Negocio negocio);


/*---------------------------------
 | Funciones individuales: Negocio
 ---------------------------------*/

/// @pre: Nada
/// @post: Devuelve un struct _Negocio filtrable
Negocio inicializarNegocio();

/// @pre: Se ingresa por teclado
/// @post: Devuelve un struct _Negocio personalizado
Negocio crearNegocioPorTeclado();

/// @pre: El struct _Negocio debe ser no-filtrable
/// @post: Muestra todos los datos del struct _Negocio
void mostrarNegocio(Negocio negocio);


/*----------------------------------
 | Funciones individuales: Producto
 ----------------------------------*/

/// @pre: Debe existir Negocio negocio. Se ingresa por teclado cada producto (ver CANTIDAD_PRODUCTOS)
/// @post: Carga en cada posicion de struct _Negocio->productos[] un struct _Producto
void cargarProductos(Negocio negocio);

/// @pre: Debe existir Negocio negocio. El producto a modificar tambien
/// @post: Modifica el precio y stock del producto en cuestion
void modificarProducto(Negocio negocio, char nombreProducto[30]);

/// @pre: Debe existir Negocio negocio. El producto a eliminar tambien
/// @post: Setea sus atributos en vacio, o -1 (lo hace filtrable)
void eliminarProducto(Negocio negocio, char nombreProducto[30]);

/// @pre: Debe existir Negocio negocio. Los productos deben ser no-filtrables
/// @post: Ordena por precio ascendente
void ordenarProductosPorPrecio(Negocio negocio);

/// @pre: Debe existir Negocio negocio. Los productos deben ser no-filtrables
/// @post: Ordena por stock (cantidad de productos) ascendente
void ordenarProductosPorStock(Negocio negocio);


/*---------------------------
 | Procedimientos de archivo
 ---------------------------*/

/// @pre: Debe existir Negocio negocio y ser no-filtrable
/// @post: Guarda todos sus datos en un .txt (se crea automaticamente)
void guardarNegocioEnArchivo(Negocio negocio);



#endif // NEGOCIO_H_INCLUDED
