#include<stdio.h>

int main()
{
    int t, s, d;
    float c = 12.0;
    scanf("%d\n%d", &t, &s);
    d = s*t;
    printf("%.3f\n", d/c);
    return 0;
}
