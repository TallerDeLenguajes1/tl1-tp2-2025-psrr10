#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct compu
{
    int velocidad;
    int anio;
    int cantidadNucleos;
    char *tipoCpu;
} typedef Compu;

char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

void generarPCs(Compu pcs[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        pcs[i].velocidad = rand() % 3 + 1;
        pcs[i].anio = rand() % 10 + 2015;
        pcs[i].cantidadNucleos = rand() % 8 + 1;
        pcs[i].tipoCpu = tipos[rand() % 6];
    }
}



int main()
{
    srand(time(NULL));

    return 0;
}
