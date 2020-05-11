#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *a;

    a = (int*)malloc(10*sizeof(int));
    scanf("%d", &n);
    
    a[0] = n;

    for (i = 1; i < 10; i++)
    {
        a[i] = 2*a[i-1];
    }

    for (i = 0; i < 10; i++) printf("N[%d] = %d\n", i, a[i]);

    return 0;
}
