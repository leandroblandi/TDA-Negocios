#include <stdio.h>
#include <stdlib.h>
#include "producto.h"
#include "negocio.h"

int main()
{
    Negocio negocio = crearNegocioPorTeclado();

    mostrarNegocio(negocio);

    guardarNegocioEnArchivo(negocio);
    guardarProductosEnArchivo(getProductos(negocio));

    return 0;
}
