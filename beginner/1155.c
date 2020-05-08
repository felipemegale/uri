#include <stdio.h>

int main()
{
    double i, sum;
    sum = 1;

    for (i = 2; i <= 100; i++)
    {
        sum += 1/i;
    }

    printf("%.2lf\n", sum);

    return 0;
}
