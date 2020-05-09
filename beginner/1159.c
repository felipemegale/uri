#include <stdio.h>

int main()
{
    int n, sum, i;

    scanf("%d", &n);

    while(n != 0)
    {
        if (n%2) n++;
        sum = 0;

        for (i = 0; i < 5; i++)
        {
            sum += n;
            n += 2;
        }
        printf("%d\n", sum);
        scanf("%d", &n);
    }
    return 0;
}
