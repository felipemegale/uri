#include <stdio.h>
#include <stdlib.h>

int main()
{
    int line, i, j;
    double sum, **mat;
    char op;

    sum = 0.0;

    scanf("%d", &line);
    scanf(" %c", &op);

    mat = (double**)calloc(12, sizeof(double*));

    for (i = 0; i < 12; i++)
        mat[i] = (double*)calloc(12, sizeof(double));

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%lf", &mat[i][j]);

    for (i = 0; i < 12; i++)
        sum += mat[i][line];

    if (op == 'S')
        printf("%.1lf\n", sum);
    else
        printf("%.1lf\n", sum/12.0);

    return 0;
}
