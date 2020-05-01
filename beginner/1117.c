#include <stdio.h>

int main()
{
    int vldscrs;
    double score, sum;
    
    vldscrs = 0;
    score = sum = 0.0;

    do
    {
        scanf("%lf", &score);

        if (score >= 0.0 && score <= 10)
        {
            vldscrs++;
            sum += score;
        }
        else
            printf("nota invalida\n");

    } while (vldscrs != 2);

    printf("media = %.2lf\n", sum/2.0);

    return 0;
}
