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

void listarPCs(struct compu pcs[], int cantidad)
{
    printf("\nListado de PCs:\n");
    for (int i = 0; i < cantidad; i++)
    {
        printf("\nPC #%d:\n", i + 1);
        printf("Velocidad: %d GHz\n", pcs[i].velocidad);
        printf("Año: %d\n", pcs[i].anio);
        printf("Núcleos: %d\n", pcs[i].cantidadNucleos);
        printf("Tipo CPU: %s\n", pcs[i].tipoCpu);
    }
}

void mostrarMasVieja(struct compu pcs[], int cantidad)
{
    int indice = 0;
    for (int i = 1; i < cantidad; i++)
    {
        if (pcs[i].anio < pcs[indice].anio)
        {
            indice = i;
        }
    }
    printf("\nPC más vieja:\n");
    printf("Velocidad: %d GHz\n", pcs[indice].velocidad);
    printf("Año: %d\n", pcs[indice].anio);
    printf("Núcleos: %d\n", pcs[indice].cantidadNucleos);
    printf("Tipo CPU: %s\n", pcs[indice].tipoCpu);
}
void mostrarMasVeloz(struct compu pcs[], int cantidad)
{
    int indice = 0;
    for (int i = 1; i < cantidad; i++)
    {
        if (pcs[i].velocidad > pcs[indice].velocidad)
        {
            indice = i;
        }
    }
    printf("\nPC más veloz:\n");
    printf("Velocidad: %d GHz\n", pcs[indice].velocidad);
    printf("Año: %d\n", pcs[indice].anio);
    printf("Núcleos: %d\n", pcs[indice].cantidadNucleos);
    printf("Tipo CPU: %s\n", pcs[indice].tipoCpu);
}

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
