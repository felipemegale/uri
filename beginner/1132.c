#include <stdio.h>

int main()
{
    int i, x, y, sum;
    sum = 0;

    scanf("%d %d", &x, &y);

    if (x < y)
    {
        for (i = x; i <= y; i++)
        {
            if (i % 13)
            {
                sum += i;
            }
        }
    }
    else if (x > y)
    {
        for (i = x; i >= y; i--)
        {
            if (i % 13)
            {
                sum += i;
            }
        }
    }


    printf("%d\n", sum);

    return 0;
}
