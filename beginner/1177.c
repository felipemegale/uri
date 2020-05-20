#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ar, n, i, j;

    ar = (int*)malloc(1000*sizeof(int));
    scanf("%d", &n);

    for (i = 0; i < 1000; i++)
    {
        ar[i] = i%n;
    }

    for (i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, ar[i]);
    }

    return 0;
}
