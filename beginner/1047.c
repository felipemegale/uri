#include <stdio.h>

int main()
{
    int ih, im, is, fh, fm, fs, d;
    scanf("%d %d %d %d", &ih, &im, &fh, &fm);

    is = ih*3600 + im*60;
    fs = fh*3600 + fm*60;

    if (is <= fs)
        d = fs - is;
    else
    {
        d = 24*3600 - is + fs; 
    }

    if (d == 0)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else
    {
        if (d < 3600)
        {
            fh = 0;
            fm = d/60;
        }
        else
        {
            fh = d/3600;
            fm = (d%3600)/60;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", fh, fm);
    }

    return 0;
}
