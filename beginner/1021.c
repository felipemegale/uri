#include<stdio.h>

int main()
{
    double val;
    int dec, aux, hun, fif, twe, ten, fiv, two, loo, hal, qrt, dim, nic, pen;

    scanf("%lf", &val);
    
    dec = (val - (int)val)*100;
    hun = val / 100;
    aux = (int)val % 100;

    fif = aux / 50;
    aux %= 50;

    twe = aux / 20;
    aux %= 20;

    ten = aux / 10;
    aux %= 10;

    fiv = aux / 5;
    aux %= 5;

    two = aux / 2;
    aux %= 2;

    loo = aux;

    hal = dec / 50;
    aux = dec % 50;

    qrt = aux / 25;
    aux %= 25;

    dim = aux / 10;
    aux %= 10;

    nic = aux / 5;
    aux %= 5;

    pen = aux;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", hun);
    printf("%d nota(s) de R$ 50.00\n", fif);
    printf("%d nota(s) de R$ 20.00\n", twe);
    printf("%d nota(s) de R$ 10.00\n", ten);
    printf("%d nota(s) de R$ 5.00\n", fiv);
    printf("%d nota(s) de R$ 2.00\n", two);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", loo);
    printf("%d moeda(s) de R$ 0.50\n", hal);
    printf("%d moeda(s) de R$ 0.25\n", qrt);
    printf("%d moeda(s) de R$ 0.10\n", dim);
    printf("%d moeda(s) de R$ 0.05\n", nic);
    printf("%d moeda(s) de R$ 0.01\n", pen);
    return 0;
}
