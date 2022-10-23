#include <stdio.h>
#include <stdlib.h>
#include "producto.h"

int main()
{
    Producto producto = crearProducto("Coca Cola", 1500, 6);
    mostrarProducto(producto);

    return 0;
}
