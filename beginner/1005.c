#include <stdio.h>

int main()
{
    double a,b;
    double avg;
    scanf("%lf\n%lf", &a,&b);
    avg = (3.5*a + 7.5*b)/11;
    printf("MEDIA = %.5lf\n", avg);
    return 0;
}
