#include <stdio.h>

int main()
{
    int num, i, prv, nxt, aux;
    prv = 0;
    nxt = 1;

    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", prv);

        aux = prv + nxt;
        prv = nxt;
        nxt = aux;
    }
    printf("\n");

    return 0;
}