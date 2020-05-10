#include <stdio.h>

int main()
{
    int n, i, j, numdiv, val;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &val);

        numdiv = 1;
        for (j = 2; j <= val; j++)
        {
            if (!(val%j)) numdiv++;
            if (numdiv > 2) break;
        }
        if (numdiv > 2) printf("%d nao eh primo\n", val);
        else printf("%d eh primo\n", val);
    }
    
    return 0;
}
