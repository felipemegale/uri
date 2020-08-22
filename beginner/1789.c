#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int qty, *arr, spd, fst, i;

    while (scanf("%d", &qty) != EOF)
    {
        arr = (int*)malloc(qty*sizeof(int));  
        for(i = 0; i < qty; i++)
            scanf("%d", &arr[i]);
        fst = arr[0];
        for (i = 1; i < qty; i++)
        {
            if (arr[i] > fst)
            {
                fst = arr[i];
            }
        }

        if (fst < 10)
            printf("1\n");
        else if (fst >= 10 && fst < 20)
            printf("2\n");
        else
            printf("3\n");
    }

    return 0;
}
