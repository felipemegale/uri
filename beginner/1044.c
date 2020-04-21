#include <stdio.h>

int main()
{
    int a, b, mod;
    scanf("%d %d", &a, &b);

    if (a >= b)
        mod = a%b;
    else
        mod = b%a;

    if (mod == 0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
        
    return 0;
}
