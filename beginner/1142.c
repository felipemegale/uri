#include <stdio.h>

int main()
{
    int i, j, num, aux;
    aux = 0;

    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        aux = aux+1;
        for (j = 0; j < 3; j++)
        {
            printf("%d ", aux);
            aux++;
        }
        printf("PUM\n");
    }

    return 0;
}
