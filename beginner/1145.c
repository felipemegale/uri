#include <stdio.h>

int main()
{
    int i, j, x, y, aux;
    aux = 1;

    scanf("%d %d", &x, &y);

    while (aux <= y)
    {
        for (i = 0; i < x; i++)
        {
            if (aux <= y)
            {
                if (i < x - 1)
                    printf("%d ", aux);
                else
                    printf("%d\n", aux);
                aux++;
            }
        }
    }

    return 0;
}