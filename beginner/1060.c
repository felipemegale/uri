#include <stdio.h>

int main()
{
    int i, acc;
    double rd;

    acc = 0;

    for (i = 0; i < 6; i++)
    {
        scanf("%lf", &rd);
        if (rd > 0)
            acc++;
    }

    printf("%d valores positivos\n", acc);

    return 0;
}
