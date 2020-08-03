#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, val;

    while (scanf("%d", &val) && val)
    {
        for (i = 0; i < val; i++)
        {
            for (j = 0; j < val; j++)
            {
                if (j == 0)
                {
                    if (i == j)
                        printf("%3d", 1);
                    if (i < j)
                        printf("%3d", (j-i)+1);
                    if (i > j)
                        printf("%3d", (i-j)+1);
                }
                else
                {
                    if (i == j)
                        printf("%4d", 1);
                    if (i < j)
                        printf("%4d", (j-i)+1);
                    if (i > j)
                        printf("%4d", (i-j)+1);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
