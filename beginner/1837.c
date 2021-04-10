#include <stdio.h>
#include <stdlib.h>

void solve(int a, int b)
{
    int r, q;

    r = a % b;

    if (r < 0) r += abs(b);

    q = (a-r)/b;

    printf("%d %d\n", q, r);
}

int main(int argc, char **argv)
{
    int a, b;

    scanf("%d %d", &a, &b);

    solve(a, b);
    
    return 0;
}
