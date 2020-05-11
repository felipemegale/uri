#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, aux;
    int *a;

    a = (int*)malloc(20*sizeof(int));

    for (i = 0; i < 20; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        aux = a[i];
        a[i] = a[19-i];
        a[19-i] = aux;
    }

    for (i = 0; i < 20; i++)
        printf("N[%d] = %d\n", i, a[i]);

    return 0;
}
