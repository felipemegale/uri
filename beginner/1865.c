#include <stdio.h>
#include <string.h>

void solve()
{
    int i, n, f;
    char name[20];

    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf("%s %d", name, &f);

        if (strcmp("Thor", name) == 0) printf("Y\n");
        else printf("N\n");
    }
}

int main(int argc, char **argv)
{
    solve();
    return 0;
}
