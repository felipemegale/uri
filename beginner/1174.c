#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *a;
    int i, n;

    a = (double*)malloc(100*sizeof(double));

    for (i = 0; i < 100; i++)
        scanf("%lf", &a[i]);

    for (i = 0; i < 100; i++)
        if (a[i] <= 10) printf("A[%d] = %.1lf\n", i, a[i]);

    return 0;
}
