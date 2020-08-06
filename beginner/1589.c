#include <stdio.h>

int main(int argc, char **argv)
{
    int cases, r1, r2;

    scanf("%d", &cases);

    do
    {
        scanf("%d %d", &r1, &r2);
        printf("%d\n", r1+r2);
        cases--;
    } while (cases > 0);
    
    return 0;
}
