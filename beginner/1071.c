#include <stdio.h>

int main()
{
    int i, beg, end, sum;

    scanf("%d%d", &beg, &end);

    sum = 0;

    if (beg > end)
    {
        for (i = beg - 1; i > end; i--)
            if (i % 2)
                sum += i;
    }
    else if (beg < end)
        for (i = end - 1; i > beg; i--)
            if (i % 2)
                sum += i;

    printf("%d\n", sum);

    return 0;
}
