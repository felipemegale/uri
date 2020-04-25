#include <stdio.h>

int main()
{
    int i, n, num, in, out;

    scanf("%d", &n);
    in = out = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);

        if (10 <= num && num <= 20)
            in++;
        else
            out++;
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
