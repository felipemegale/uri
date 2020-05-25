#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, n, val, pos, i;

    scanf("%d", &n);

    arr = (int*)calloc(n, sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    val = arr[0];
    pos = 0;

    for (i = 1; i < n; i++)
    {
        if (arr[i] < val)
        {
            val = arr[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n", val);
    printf("Posicao: %d\n", pos);

    return 0;
}
