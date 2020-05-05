#include <stdio.h>

int main()
{
    double age, num, sum, avg;
    sum = avg = 0;

    do
    {
        scanf("%lf", &age);
        if (age >= 0)
        {
            sum += age;
            num++;
        }
        else
        {
            break;
        }
    } while (age >= 0);

    printf("%.2lf\n", sum/num);

    return 0;
}