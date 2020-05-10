#include <stdio.h>

int main()
{
    int t, i, a, b, y;
    double ra ,rb;

    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d %d %lf %lf", &a, &b, &ra, &rb);

        y = 0;
        while (a <= b && y <= 100)
        {
            a += a*(ra)/100;
            b += b*(rb)/100;
            y++;
        }
        if (y <= 100) printf("%d anos.\n", y);
        else printf("Mais de 1 seculo.\n");
    }

    return 0;
}
