#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, val;
    unsigned long long int *a, aux, p, k;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &val);
        a = (unsigned long long int*)malloc(val*sizeof(unsigned long long int));

        p = 0;
        k = 1;
        aux = 0;

        for (j = 0; j < val; j++)
        {
            aux = p+k;
            p = k;
            k = aux;
        }

        printf("Fib(%d) = %llu\n", val, p);

        free(a);
    }
    
    return 0;
}
