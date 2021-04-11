#include <stdio.h>

void solve()
{
    int i, n, t;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &t);

        if (t % 2) printf("1\n");
        else printf("0\n");
    }
}

int main(int argc, char **argv)
{
    solve();
    return 0;
}
