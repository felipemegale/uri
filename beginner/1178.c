#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double *ar, n;

    ar = (double*)malloc(100*sizeof(double));
    scanf("%lf", &n);

    for (i = 0; i < 100; i++)
    {
        ar[i] = n;
        n /= 2;
    }

    for (i = 0; i < 100; i++)
    {
        printf("N[%d] = %.4lf\n", i, ar[i]);
    }

    return 0;
}