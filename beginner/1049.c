#include <stdio.h>
#include <string.h>

int main()
{
    char vert[20], type[20], food[20];
    scanf("%19s %19s %19s", vert, type, food);

    if (!strcmp("vertebrado", vert))
    {
        if (!strcmp("ave", type))
        {
            if (!strcmp("carnivoro", food))
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        else
        {
            if (!strcmp("onivoro", food))
                printf("homem\n");
            else
                printf("vaca\n");
        }
    }
    else
    {
        if (!strcmp("inseto", type))
        {
            if (!strcmp("hematofago", food))
                printf("pulga\n");
            else
                printf("lagarta\n");
        }
        else
        {
            if (!strcmp("hematofago", food))
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
        }
    }

    return 0;
}
