#include <stdio.h>

int main()
{
    double sum, num, den;
    sum = 0;
    den = 1;

    for (num = 1; num <= 39; num += 2)
    {
        sum += num/den;
        den *= 2;
    }

    printf("%.2lf\n", sum);

    return 0;
}
