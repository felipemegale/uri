#include <stdio.h>

int main()
{
    int x, y, gr, in, dr, amt, cont;

    gr = in = dr = amt = cont = 0;

    while (cont != 2)
    {
        scanf("%d %d", &x, &y);
        amt++;

        if (x > y)
            in++;
        else if (x < y)
            gr++;
        else
            dr++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &cont);
    }

    printf("%d grenais\n", amt);
    printf("Inter:%d\n", in);
    printf("Gremio:%d\n", gr);
    printf("Empates:%d\n", dr);

    if (in > gr)
        printf("Inter venceu mais\n");
    else if (in < gr)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");

    return 0;
}
