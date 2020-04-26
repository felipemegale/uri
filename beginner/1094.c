#include <stdio.h>

int main()
{
    int i, n, amt = 0;
    float c, r, s, tot, pc, pr, ps = 0.0;
    char antp;

    scanf("%d", &n);

    c = r = s = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d %c", &amt, &antp);

        tot += amt;
        if (antp == 'C')
            c += amt;
        else if (antp == 'R')
            r += amt;
        else
            s += amt;
    }

    pc = (c/tot)*100;
    pr = (r/tot)*100;
    ps = (s/tot)*100;

    printf("Total: %.0f cobaias\n", tot);
    printf("Total de coelhos: %.0f\n", c);
    printf("Total de ratos: %.0f\n", r);
    printf("Total de sapos: %.0f\n", s);
    printf("Percentual de coelhos: %.2f %%\n", pc);
    printf("Percentual de ratos: %.2f %%\n", pr);
    printf("Percentual de sapos: %.2f %%\n", ps);

    return 0;
}
