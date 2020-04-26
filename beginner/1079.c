#include <stdio.h>

int main()
{
    int i, n;
    double a, b, c, wavg = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf", &a, &b, &c);
        
        wavg = (2.0*a + 3.0*b + 5.0*c)/10.0;
        printf("%.1lf\n", wavg);
    }

    return 0;
}
