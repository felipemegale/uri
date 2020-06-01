#include <stdio.h>
#include <stdlib.h>

#define TAM 12

int main()
{
    int i, j, aux;
    double **mat, sum, amt;
    char op;

    mat = (double**)calloc(TAM, sizeof(double*));

    for (i = 0; i < TAM; i++)
        mat[i] = (double*)calloc(TAM, sizeof(double));

    scanf(" %c", &op);

    for (i = 0; i < TAM; i++)
        for (j = 0; j< TAM; j++)
            scanf("%lf ", &mat[i][j]);

    sum = amt = 0;
    aux = TAM-1;

    for (i = 0; i < aux-2; i++)
    {
        for (j = (i+1); j < aux; j++)
        {
            sum += mat[i][j];
            amt++;
        }
        aux--;
    }

    if (op == 'M')
        printf("%.1lf\n", sum/amt);
    else
        printf("%.1lf\n", sum);

    return 0;
}
