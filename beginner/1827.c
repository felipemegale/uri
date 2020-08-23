#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, j, tam, rd;

    while (scanf("%d", &tam) != EOF)
    {
        for (i = 0; i < tam; i++)
        {
            for (j = 0; j < tam; j++)
            {
                if (i == j && i == tam/2)
                    printf("4");
                else if (i >= (tam/3) && i <= (tam-(tam/3)-1) && j >= (tam/3) && j <= (tam-(tam/3)-1))
                    printf("1");
                else if (i == j)
                    printf("2");
                else if (i + j == tam-1)
                    printf("3");
                else
                    printf("0");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
