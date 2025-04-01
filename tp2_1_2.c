#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main()
{
    srand(time(NULL));

    int i;
    double vt[N];
    
    double *puntVt = vt;

    for (i = 0; i < N; i++)
    {
        *puntVt = 1 + rand() % 100;

        printf("%f", vt[i]);
        puntVt++;
    }

    return 0;
}
