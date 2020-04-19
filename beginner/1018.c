#include<stdio.h>

int main()
{
    int aux, val, hun, fif, twe, ten, fiv, two, one;
    scanf("%d", &val);
    aux = val;

    hun = val/100;
    val -= 100*hun;

    fif = val/50;
    val -= 50*fif;

    twe = val/20;
    val -= 20*twe;

    ten = val/10;
    val -= 10*ten;

    fiv = val/5;
    val -= 5*fiv;

    two = val/2;
    val -= 2*two;

    one = val/1;
    val -= 1*one;

    printf("%d\n", aux);
    printf("%d nota(s) de R$ 100,00\n", hun);
    printf("%d nota(s) de R$ 50,00\n", fif);
    printf("%d nota(s) de R$ 20,00\n", twe);
    printf("%d nota(s) de R$ 10,00\n", ten);
    printf("%d nota(s) de R$ 5,00\n", fiv);
    printf("%d nota(s) de R$ 2,00\n", two);
    printf("%d nota(s) de R$ 1,00\n", one);

    return 0;
}
