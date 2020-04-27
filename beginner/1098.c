#include <stdio.h>
#include <math.h>

int main()
{
    double i, j;
    int aux;

    for (i = 0; i <= 2.0; i+=0.2)
    {
        for (j = 1; j <= 3.0; j++)
        {
            if (i - (int)i == 0.0 || i > 1.8)
            {
                aux = (int)j+(int)i;
                printf("I=%d J=%d\n", (int)i, aux);
            }
            else
            {
                printf("I=%.1lf J=%.1lf\n", i, j+i);
            }
        }
    }

    return 0;
}
