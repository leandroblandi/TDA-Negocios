#include <stdio.h>
#include <stdlib.h>
#include "producto.h"
#include "negocio.h"

int main()
{
    Negocio negocio = crearNegocioPorTeclado();

    mostrarNegocio(negocio);

    ordenarProductosPorStock(negocio);

    mostrarNegocio(negocio);

    return 0;
}
