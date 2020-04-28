#include <stdio.h>

int main()
{
    int m, n, i, sum;
    m, n, i, sum = 0;

    while (1)
    {
        scanf("%d %d", &m, &n);

        if (m <= 0 || n <= 0)
            break;

        if (m > n)
        {
            for (i = n; i <= m; i++)
            {
                printf("%d ", i);
                sum += i;
            }
        }
        else if (n > m)
        {
            for (i = m; i <= n; i++)
            {
                printf("%d ", i);
                sum += i;
            }
        }
        else
        {
            printf("%d ", m);
            sum += m;
        }
        printf("Sum=%d\n", sum);
        sum = 0;
    }

    return 0;
}
