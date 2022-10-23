#include <stdio.h>
#include <stdlib.h>
#include "producto.h"
#include "negocio.h"

int main()
{
    Negocio negocio = crearNegocio("Los Pepes SA", "Los Humedales 6400", 38958493);
    mostrarNegocio(negocio);

    return 0;
}
