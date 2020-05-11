#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *a;

    a = (int*)malloc(10*sizeof(int));

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] <= 0) a[i] = 1;
    }
    
    for (i = 0; i < 10; i++)
    {
        printf("X[%d] = %d\n", i, a[i]);
    }

    return 0;
}
