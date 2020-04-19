#include <stdio.h>

int main()
{
    float a,b,c;
    float avg;
    scanf("%f\n%f\n%f", &a,&b,&c);
    avg = (a*2 + b*3 + c*5)/10;
    printf("MEDIA = %.1f\n", avg);
    return 0;
}
