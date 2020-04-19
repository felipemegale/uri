#include<stdio.h>
#include<math.h>

int main()
{
    double fac = (4.0/3)*3.14159;
    double r, vol;
    scanf("%lf", &r);
    vol = fac*pow(r,3);
    printf("VOLUME = %.3lf\n", vol);
    return 0;
}
