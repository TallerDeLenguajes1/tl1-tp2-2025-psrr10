#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "funciones4.c"

int main()
{
    srand(time(NULL));
    struct compu pcs[5]; // Arreglo para 5 PCs

    generarPCs(pcs, 5);
    listarPCs(pcs, 5);
    mostrarMasVieja(pcs, 5);
    mostrarMasVeloz(pcs, 5);

    return 0;
}
