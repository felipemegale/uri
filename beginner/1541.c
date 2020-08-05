#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,per;
    while (1)
    {
        scanf("%lf", &a);
        if (a == 0)
        {
            break;
        }
        else
        {
            scanf("%lf", &b);
            scanf("%lf", &per);
            printf("%d\n", (int)sqrt(100*(a*b)/per));
        }
    }
}
