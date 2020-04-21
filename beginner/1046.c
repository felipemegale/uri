#include <stdio.h>

int main()
{
    int a, b, diff;
    scanf("%d %d", &a, &b);

    if (a == b)
        printf("O JOGO DUROU 24 HORA(S)\n");
    else
    {
        if (a < b)
            diff = b - a;
        else
            diff = (24-a) + b;
        printf("O JOGO DUROU %d HORA(S)\n", diff);
    }
    return 0;
}
