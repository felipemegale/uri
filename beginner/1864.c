#include <stdio.h>

void solve()
{
    int n, i;
    char *sentence = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%c", sentence[i]);
    }
    printf("\n");
}

int main(int argc, char ** argv)
{
    solve();
    return 0;
}
