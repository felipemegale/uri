#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    double **mat, sum, amt;
    char op;

    mat = (double**)calloc(12, sizeof(double*));

    for (i = 0; i < 12; i++)
        mat[i] = (double*)calloc(12, sizeof(double));

    scanf(" %c", &op);

    for (i = 0; i < 12; i++)
        for (j = 0; j< 12; j++)
            scanf("%lf ", &mat[i][j]);

    sum = amt = 0;

    for (i = 1; i < 12; i++)
    {
        for (j = (12-i); j < 12; j++)
        {
            sum += mat[i][j];
            amt++;
        }
    }

    if (op == 'M')
        printf("%.1lf\n", sum/amt);
    else
        printf("%.1lf\n", sum);

    return 0;
}
