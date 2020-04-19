#include<stdio.h>
#include<stdlib.h>

int findGreatest(int a, int b)
{
    return (a+b+abs(a-b))/2;
}

int main()
{
    int a, b, c, maior;
    scanf("%d %d %d", &a, &b, &c);
    maior = findGreatest(findGreatest(a,b), c);
    printf("%d eh o maior\n", maior);
    return 0;
}
