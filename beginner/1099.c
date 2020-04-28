#include <stdio.h>

int main()
{
    int i, j, n, x, y, sum;
    n = x = y = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        sum = 0;
        scanf("%d %d", &x, &y);

        if (x > y)
        {
            for (j = x - 1; j > y; j--)
                if (j % 2)
                    sum += j;
        }
        else
        {
            for (j = y - 1; j > x; j--)
                if (j % 2)
                    sum += j;
        }
        printf("%d\n", sum);
    }

    return 0;
}
