/*-----------------------
 | negocio.c
 | Author: Leandro Blandi
 ------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "producto.h"
#include "negocio.h"

#define CANTIDAD_PRODUCTOS 2
#define NO_ENCONTRADO -1


struct _Negocio
{
    char nombre[30];
    char direccion[60];
    int CUIT;
    Producto productos[5];
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


Negocio inicializarNegocio()
{
    return crearNegocio("", "", -1);
}


Negocio crearNegocioPorTeclado()
{
    char nombre[30];
    char direccion[60];
    int CUIT;

    printf("\nIngrese nombre para el negocio: ");
    fflush(stdin);
    gets(nombre);

    printf("\nIngrese la direccion donde se ubica \"%s\": ", nombre);
    fflush(stdin);
    gets(direccion);

    printf("\nIngrese el CUIT para el negocio: ");
    scanf("%d", &CUIT);

    Negocio negocio = crearNegocio(nombre, direccion, CUIT);
    cargarProductos(negocio);

    return negocio;

}


void mostrarNegocio(Negocio negocio)
{
    printf("\nNegocio:");
    printf("\n\t- Nombre: %s", negocio->nombre);
    printf("\n\t- Direccion legal: %s", negocio->direccion);
    printf("\n\t- CUIT: %d", negocio->CUIT);
    printf("\nProductos:");

    for(int i = 0; i < CANTIDAD_PRODUCTOS; i++)
    {
        mostrarProducto(negocio->productos[i]);
    }
}


void cargarProductos(Negocio negocio)
{
    for(int i = 0; i < CANTIDAD_PRODUCTOS; i++)
    {
        negocio->productos[i] = crearProductoPorTeclado();
    }
}


void modificarProducto(Negocio negocio, char nombreProducto[30])
{
    int encontrado = NO_ENCONTRADO;

    for(int i = 0; i < CANTIDAD_PRODUCTOS; i++)
    {
        if(strcmp(getNombreProducto(negocio->productos[i]), nombreProducto) == 0)
        {
            float nuevoPrecio;
            int nuevaCantidad;

            printf("\nIngrese nuevo precio para \"%s\": ", getNombreProducto(negocio->productos[i]));
            fflush(stdin);
            scanf("%f", &nuevoPrecio);
            setPrecioProducto(negocio->productos[i], nuevoPrecio);

            printf("\nIngrese nueva cantidad de stock para \"%s\": ", getNombreProducto(negocio->productos[i]));
            fflush(stdin);
            scanf("%d", &nuevaCantidad);
            setStockProducto(negocio->productos[i], nuevaCantidad);

            encontrado = i;
            i = CANTIDAD_PRODUCTOS;
        }
    }
    if(encontrado == NO_ENCONTRADO)
    {
        printf("\nNo se encontro el producto \"%s\" en el negocio \"%s\"...",
            nombreProducto, negocio->nombre
        );
    }
}


void eliminarProducto(Negocio negocio, char nombreProducto[30])
{
    int encontrado = NO_ENCONTRADO;

    for(int i = 0; i < CANTIDAD_PRODUCTOS; i++)
    {
        if(strcmp(getNombreProducto(negocio->productos[i]), nombreProducto) == 0)
        {

            setNombreProducto(negocio->productos[i], "");
            setPrecioProducto(negocio->productos[i], -1);
            setStockProducto(negocio->productos[i], -1);

            encontrado = i;
            i = CANTIDAD_PRODUCTOS;
        }
    }
    if(encontrado == NO_ENCONTRADO)
    {
        printf("\nNo se encontro el producto \"%s\" en el negocio \"%s\"...",
            nombreProducto, negocio->nombre
        );
    }
}


void ordenarProductosPorPrecio(Negocio negocio)
{
    Producto productoAuxiliar;

    for(int i = 0; i < CANTIDAD_PRODUCTOS; i++)
    {
        for(int j = 0; j < CANTIDAD_PRODUCTOS - 1; j++)
        {
            if(getPrecioProducto(negocio->productos[j]) > getPrecioProducto(negocio->productos[j+1]))
            {
                productoAuxiliar = negocio->productos[j];
                negocio->productos[j] = negocio->productos[j+1];
                negocio->productos[j+1] = productoAuxiliar;
            }
        }
    }
}


void ordenarProductosPorStock(Negocio negocio)
{
    Producto productoAuxiliar;

    for(int i = 0; i < CANTIDAD_PRODUCTOS; i++)
    {
        for(int j = 0; j < CANTIDAD_PRODUCTOS - 1; j++)
        {
            if(getStockProducto(negocio->productos[j]) > getStockProducto(negocio->productos[j+1]))
            {
                productoAuxiliar = negocio->productos[j];
                negocio->productos[j] = negocio->productos[j+1];
                negocio->productos[j+1] = productoAuxiliar;
            }
        }
    }
}


