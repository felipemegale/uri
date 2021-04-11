#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve()
{
    char line[10];
    int i, sum = 0;

    for (i = 0; i < 3;)
    {
        fgets(line, 10, stdin);

        if (strcmp("--*\n", line) == 0)
        {
            sum += 1;
        }
        else if (strcmp("-*-\n", line) == 0)
        {
            sum += 2;
        }
        else if (strcmp("-**\n", line) == 0)
        {
            sum += 3;
        }
        else if (strcmp("*--\n", line) == 0)
        {
            sum += 4;
        }
        else if (strcmp("*-*\n", line) == 0)
        {
            sum += 5;
        }
        else if (strcmp("**-\n", line) == 0)
        {
            sum += 6;
        }
        else if (strcmp("***\n", line) == 0)
        {
            sum += 7;
        }

        if (line[0] == 'c')
        {
            printf("%d\n", sum);
            sum = 0;
            i++;
        }
    }
}

int main(int argc, char **argv)
{
    solve();
    return 0;
}
