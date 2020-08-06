#include <stdio.h>

int main(int argc, char **argv)
{
    int cmp;

    while (scanf("%d", &cmp) != EOF)
    {
        if (cmp != 0)
            printf("vai ter duas!\n");
        else
            printf("vai ter copa!\n");
    }

    return 0;
}
