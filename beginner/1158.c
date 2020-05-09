#include <stdio.h>

int main()
{
    int i, j, n, x, y, sum;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);

        if (!(x%2))
            x++;

        sum = 0;
        for (j = 0; j < y; j++)
        {
            sum += x;
            x += 2;
        }
        printf("%d\n", sum);
    }

    return 0;
}
