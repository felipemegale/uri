#include <stdio.h>

int main()
{
    int i, val, evn, odd, pos, neg;

    val = evn = odd = pos = neg = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &val);

        if (val % 2 == 0)
            evn++;
        else
            odd++;

        if (val > 0)
            pos++;
        else if (val < 0)
            neg++;
    }

    printf("%d valor(es) par(es)\n", evn);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}
