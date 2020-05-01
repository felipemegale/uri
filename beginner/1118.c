#include <stdio.h>

int main()
{
    int vldscrs, cont;
    double score, sum;

    vldscrs = 0;
    score = sum = 0.0;

    do
    {
        while (vldscrs != 2)
        {
            scanf("%lf", &score);
            if (score >= 0.0 && score <= 10.0)
            {
                vldscrs++;
                sum += score;
            }
            else
                printf("nota invalida\n");
        }

        printf("media = %.2lf\n", sum/2.0);
        
        vldscrs = 0;
        sum = 0.0;

        do
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &cont);
        } while(cont < 1 || cont > 2);

    } while (cont != 2);

    return 0;
}
