#include <stdio.h>

int main()
{
    double sal, tax;
    scanf("%lf", &sal);

    if (sal <= 2000)
        printf("Isento\n");
    else
    {
        if (sal > 2000 && sal <=3000)
            tax = (sal-2000.0)*0.08;
        else if (sal > 3000 && sal <= 4500)
        {
            sal -= 3000;
            tax = 1000.0*0.08;
            tax += sal*0.18;
        }
        else
        {
            sal -= 4500;
            tax = 1000.0*0.08;
            tax += 1500.0*0.18;
            tax += sal*0.28;
        }
        printf("R$ %.2lf\n", tax);
    }

    return 0;
}
