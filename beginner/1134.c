#include <stdio.h>

int main()
{
    int code, eth, gas, die;
    eth = gas = die = 0;

    do
    {
        do
        {
            scanf("%d", &code);
        } while (code > 4);

        if (code == 1)
            eth++;
        else if (code == 2)
            gas++;
        else if (code == 3)
            die++;
    } while (code != 4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", eth);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", die);

    return 0;
}
