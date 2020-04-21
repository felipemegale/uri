#include <stdio.h>

int main()
{
    double n1, n2, n3, n4, avg, exgd;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    avg = (2*n1 + 3*n2 + 4*n3 + n4)/10.0;

    printf("Media: %.1lf\n", avg);

    if (avg >= 7.0)
        printf("Aluno aprovado.\n");
    else if (avg < 5.0)
        printf("Aluno reprovado.\n");
    else
    {
        scanf("%lf", &exgd);
        printf("Aluno em exame.\n");

        printf("Nota do exame: %.1lf\n", exgd);
        avg = (avg+exgd)/2;

        if (avg >= 5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n", avg);
    }

    return 0;
}
