#include <stdio.h>

int main()
{
    int a, n, numval, num, sum, i;
    numval = sum = 0;

    scanf("%d", &a);

    do
    {
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 0; i < n; i++)
        sum += a++;

    printf("%d\n", sum);

    return 0;
}