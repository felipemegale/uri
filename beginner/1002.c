#include<stdio.h>
#include<math.h>

int main()
{
    double pi = 3.14159;
    double r;
    scanf("%lf", &r);

    printf("A=%.4lf\n", pi*pow(r,2));
    return 0;
}
