#include <stdio.h>

int main()
{
    int n, val, i, j, sum;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &val);

        if (val == 1) printf("1 nao eh perfeito\n");
        else
        {
            sum = 1;
            for (j = 2; j < val; j++)
            {
                if (!(val%j)) sum += j;
            }

            if (sum == val) printf("%d eh perfeito\n", val);
            else printf("%d nao eh perfeito\n", val);
        }
    }

    return 0;
}
