#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, per, ar;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a+b > c && a+c > b && b+c > a)
    {
        per = a+b+c;
        printf("Perimetro = %.1lf\n", per);
    }
    else
    {
        ar = (a+b)*c/2;
        printf("Area = %.1lf\n", ar);
    }
    return 0;
}
