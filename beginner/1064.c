#include <stdio.h>

int main()
{
    int i, num;
    double val, sum, avg;

    num = 0;
    sum = 0;

    for (i = 0; i < 6; i++)
    {
        scanf("%lf", &val);
        
        if (val > 0)
        {
            num++;
            sum += val;
        }
    }

    avg = sum/(double)num;
    printf("%d valores positivos\n", num);
    printf("%.1lf\n", avg);
    return 0;
}
