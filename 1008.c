#include<stdio.h>

int main()
{
    int empnum,hours;
    double price,salary;
    scanf("%d\n%d\n%lf",&empnum,&hours,&price);
    salary = price*hours;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", empnum, salary);
    return 0;
}
