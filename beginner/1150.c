#include <stdio.h>

int main()
{
    int x, z, i, sum;

    scanf("%d", &x);
    sum = z = x;

    do
    {
        scanf("%d", &z);
    } while (z <= x);

    for (i = 1; sum <= z; i++)
    {
        sum += ++x;
    }

    printf("%d\n", i);

    return 0;
}