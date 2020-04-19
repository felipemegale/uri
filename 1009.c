#include<stdio.h>

int main()
{
    char name [100];
    double fixsal,totsol,sal;
    fgets(name, 100, stdin);
    scanf("%lf\n%lf", &fixsal, &totsol);
    sal = fixsal + totsol*15/100;
    printf("TOTAL = R$ %.2lf\n", sal);
    return 0;
}
