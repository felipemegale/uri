#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int i, j, val, **mat;
    int digitos, t;

    while (scanf("%d", &val) && val)
    {
        mat = (int**)malloc(val*sizeof(int*));
        for (i = 0; i < val; i++) mat[i] = (int*)malloc(val*sizeof(int));

        for (i = 0; i < val; i++)
        {
            for (j = 0; j < val; j++)
            {
                mat[i][j] = (int)pow(2.0, (double)(i+j));
            }
        }

        digitos = 0;
        t = mat[val-1][val-1];

        do
        {
            t % 10;
            t = t/10;
            digitos++;
        } while (t > 0);

        for (i = 0; i < val; i++)
        {
            for (j = 0; j < val; j++)
            {
                if (j == 0)
                    printf("%*d", digitos, mat[i][j]);
                else
                    printf(" %*d", digitos, mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
