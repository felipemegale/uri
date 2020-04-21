#include <stdio.h>

int main()
{
    float sal, newsal, amtinc, per;
    scanf("%f", &sal);

    if (0 <= sal && sal <= 400.0)
        per = 15.0;
    else if (400.01 <= sal && sal <= 800.0)
        per = 12.0;
    else if (800.01 <= sal && sal <= 1200.0)
        per = 10.0;
    else if (1200.01 <= sal && sal <= 2000.0)
        per = 7.0;
    else if (sal >= 2000.0)
        per = 4.0;

    amtinc = sal*per/100.0;
    newsal = sal+amtinc;

    printf("Novo salario: %.2lf\n", newsal);
    printf("Reajuste ganho: %.2lf\n", amtinc);
    printf("Em percentual: %.0lf %%\n", per);
    return 0;
}
