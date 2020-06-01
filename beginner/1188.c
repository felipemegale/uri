#include <stdio.h>
#include <stdlib.h>

#define TAM 12

int main()
{
    int i, j, auxi, auxj;
    double **mat, sum, amt;
    char op;

    mat = (double**)calloc(TAM, sizeof(double*));

    for (i = 0; i < TAM; i++)
        mat[i] = (double*)calloc(TAM, sizeof(double));

    scanf(" %c", &op);

    for (i = 0; i < TAM; i++)
        for (j = 0; j < TAM; j++)
            scanf("%lf ", &mat[i][j]);

    sum = amt = 0;
    auxi = 7;
    auxj = auxi - 2;

    for (i = auxi; i < TAM; i++)
    {
        for (j = auxj; j < i; j++)
        {
            sum += mat[i][j];
            amt++;
        }
        auxj--;
    }

    if (op == 'M')
        printf("%.1lf\n", sum/amt);
    else
        printf("%.1lf\n", sum);

    return 0;
}
