#include <stdio.h>

int main()
{
    int i, val;

    scanf("%d", &val);

    if (val % 2 == 0)
        val++;

    for (i = 0; i < 6; i++)
    {
        printf("%d\n", val);
        val += 2;
    }
    return 0;
}
