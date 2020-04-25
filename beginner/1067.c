#include <stdio.h>

int main()
{
    int i, val;

    scanf("%d", &val);

    for (i = 1; i <= val; i += 2)
        printf("%d\n", i);
    return 0;
}
