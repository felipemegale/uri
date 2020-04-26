#include <stdio.h>

int main()
{
    long int i, val;

    scanf("%ld", &val);

    if (val % 2)
        val++;

    for (i = 2; i <= val; i += 2)
        printf("%ld^2 = %ld\n", i, i*i);

    return 0;
}
