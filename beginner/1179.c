#include <stdio.h>
#include <stdlib.h>

void printarr(int* arr, int size, int type)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (type == 0)
        {
            printf("par[%d] = %d\n", i, arr[i]);
        }
        else
        {
            printf("impar[%d] = %d\n", i, arr[i]);
        }
    }
}

int main()
{
    int *even, *odd, n, amount, ie, io;
    
    even = (int*)calloc(5,sizeof(int));
    odd = (int*)calloc(5,sizeof(int));

    ie = io = 0;
    amount = 0;

    while (amount < 15)
    {
        if (ie == 5)
        {
            printarr(even, 5, 0);
            free(even);
            even = (int*)calloc(5, sizeof(int));
            ie = 0;
        }
        else if (io == 5)
        {
            printarr(odd, 5, 1);
            free(odd);
            odd = (int*)calloc(5,sizeof(int));
            io = 0;
        }

        scanf("%d", &n);
        amount++;

        if (n%2 == 0)
        {
            even[ie] = n;
            ie++;
        }
        else
        {
            odd[io] = n;
            io++;
        }
    }

    printarr(odd, io, 1);
    printarr(even, ie, 0);

    return 0;
}
