#include <stdio.h>

int main()
{
    int i, num, acc;
    
    acc = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
            acc++;
    }

    printf("%d valores pares\n", acc);
    
    return 0;
}
