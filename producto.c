/*-----------------------
 | producto.c
 | Author: Leandro Blandi
 ------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "producto.h"

#define CANTIDAD_PRODUCTOS 2

struct _Producto
{
    char nombre[30];
    float precio;
    int stock;
};


/*--------------
 | Constructor
 ---------------*/

Producto crearProducto(char nombre[30], float precio, int stock)
{
    Producto producto = malloc(sizeof(struct _Producto));

    strcpy(producto->nombre, nombre);

    producto->precio = precio;
    producto->stock = stock;

    return producto;
}


/*----------
| Setters
-----------*/

void setNombreProducto(Producto producto, char nuevoNombre[30])
{
    strcpy(producto->nombre, nuevoNombre);
}


void setPrecioProducto(Producto producto, float nuevoPrecio)
{
    producto->precio = nuevoPrecio;
}


void setStockProducto(Producto producto, int nuevaCantidad)
{
    producto->stock = nuevaCantidad;
}


/*----------
| Getters
-----------*/

char * getNombreProducto(Producto producto)
{
    return producto->nombre;
}


float getPrecioProducto(Producto producto)
{
    return producto->precio;
}


int getStockProducto(Producto producto)
{
    return producto->stock;
}


/*------------------------
 | Funciones individuales
 -------------------------*/

Producto crearProductoPorTeclado()
{
    char nombre[30];
    float precio;
    int stock;

    printf("Ingrese un nombre para el producto: ");
    fflush(stdin);
    gets(nombre);

    printf("\nIngrese un precio para \"%s\": ", nombre);
    scanf("%f", &precio);

    printf("\n?Cuanto stock tiene \"%s\"?: ", nombre);
    scanf("%d", &stock);

    return crearProducto(nombre, precio, stock);
}


Producto inicializarProducto()
{
    return crearProducto("", -1, -1);
}


void mostrarProducto(Producto producto)
{
    if(producto->stock != -1)
    {
        printf("\nProducto:");
        printf("\n\t- Nombre: %s", producto->nombre);
        printf("\n\t- Precio: AR$%.2f", producto->precio);
        printf("\n\t- Stock: %d", producto->stock);
    }
}


/*---------------------------
 | Procedimientos de archivo
 ---------------------------*/

void guardarProductosEnArchivo(Producto productos[])
 {
    FILE * archivoProductos = fopen("productos.txt", "w");

    for(int i = 0; i < CANTIDAD_PRODUCTOS; i++)
    {
        if(productos[i]->stock != -1)
        {
            fprintf(
                archivoProductos,
                "%s,%.2f,%d\n",
                productos[i]->nombre,
                productos[i]->precio,
                productos[i]->stock
            );
        }
    }
    fclose(archivoProductos);
 }



