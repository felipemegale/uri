#include <stdio.h>

int main()
{
    int n, val, i, j;

    scanf("%d", &n);
    while (n != 0)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                val = i;

                if (j < val)
                    val = j;
                if (n - i + 1 < val)
                    val = n - i + 1;
                if (n - j + 1 < val)
                    val = n - j + 1;

                if (val < 10)
                    printf("  %d", val);
                else
                    printf(" %d", val);

                if (j < n)
                    printf(" ");
                else
                    printf("\n");
            }
        }
        printf("\n");
        scanf("%d", &n);
    }

    return 0;
}
