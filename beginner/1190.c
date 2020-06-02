#include <stdio.h>
#include <stdlib.h>

#define TAM 12

int main()
{
    int i, j, auxj;
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
    auxj = TAM;

    for (i = 1; i < TAM-1; i++)
    {
        if (i < TAM/2)
        {
            auxj--;
            for (j = auxj; j < TAM; j++)
            {
                sum += mat[i][j];
                amt++;
            }
        }
        else
        {
            for (j = auxj; j < TAM; j++)
            {
                sum += mat[i][j];
                amt++;
            }
            auxj++;
        }
    }

    if (op == 'M')
        printf("%.1lf\n", sum/amt);
    else
        printf("%.1lf\n", sum);

    return 0;
}
