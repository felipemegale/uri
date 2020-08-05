#include <stdio.h>

int main()
{
    int i, j, val;

    while (scanf("%d",&val) != EOF)
    {
        for (i = 0; i < val; i++)
        {
            for (j = 0; j < val; j++)
            {
                if (i == j && i+j != val-1) printf("%d", 1);
                else if (i + j == val-1) printf("%d", 2);
                else printf("%d", 3);
            }
            printf("\n");
        }
    }
    return 0;
}
