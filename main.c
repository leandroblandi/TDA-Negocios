#include <stdio.h>
#include <stdlib.h>
#include "producto.h"

int main()
{
    Producto producto = crearProductoPorTeclado();
    mostrarProducto(producto);

    return 0;
}
