#include <stdio.h>

int main()
{
    int n, i, val;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &val);

        if (val == 0)
            printf("NULL\n");
        else
        {
            if (val % 2 == 0)
                printf("EVEN ");
            else if (val % 2)
                printf("ODD ");

            if (val > 0)
                printf("POSITIVE\n");
            else
                printf("NEGATIVE\n");
        }
    }

    return 0;
}
