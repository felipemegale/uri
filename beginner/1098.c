#include <stdio.h>
#include <math.h>

int main()
{
    double i, j, aux;

    for (i = 0; i <= 2.0; i+=0.2)
    {
        for (j = 1; j <= 3.0; j++)
        {
            aux = j+i;
            printf("I=%g J=%g\n", i, aux);
        }
    }

    return 0;
}
