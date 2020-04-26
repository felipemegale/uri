#include <stdio.h>

int main()
{
    int i, n, gpos, gval = -1;

    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &n);

        if (n > gval)
        {
            gpos = i;
            gval = n;
        }
    }

    printf("%d\n%d\n", gval, gpos);

    return 0;
}
