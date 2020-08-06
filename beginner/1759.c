#include <stdio.h>

int main(int argc, char **argv)
{
    int count, i;
    scanf("%d", &count);
    for (i = 0; i < count; i++)
    {
        if (i < count-1)
            printf("Ho ");
        else
            printf("Ho!\n");
    }
    return 0;
}
