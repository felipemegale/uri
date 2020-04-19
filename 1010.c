#include <stdio.h>

int main()
{
    int c1, q1, c2, q2;
    float p1, p2, tot1, tot2;
    scanf("%d %d %f", &c1, &q1, &p1);
    scanf("%d %d %f", &c2, &q2, &p2);

    tot1 = q1*p1;
    tot2 = q2*p2;

    printf("VALOR A PAGAR: R$ %.2f\n", tot1+tot2);
    return 0;
}
