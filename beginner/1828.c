#include <stdio.h>
#include <string.h>

char* solve(char* ans, char* sheldon, char* raj)
{
    if (!strcmp(sheldon, raj))
    {
        ans = "De novo!";
    }
    else
    {
        if (!strcmp(sheldon, "pedra") && (!strcmp(raj, "tesoura") || !strcmp(raj, "lagarto")))
        {
            ans = "Bazinga!";
        }
        else if (!strcmp(sheldon, "papel") && (!strcmp(raj, "pedra") || !strcmp(raj, "Spock")))
        {
            ans = "Bazinga!";
        }
        else if (!strcmp(sheldon, "tesoura") && (!strcmp(raj, "papel") || !strcmp(raj, "lagarto")))
        {
            ans = "Bazinga!";
        }
        else if (!strcmp(sheldon, "lagarto") && (!strcmp(raj, "papel") || !strcmp(raj, "Spock")))
        {
            ans = "Bazinga!";
        }
        else if (!strcmp(sheldon, "Spock") && (!strcmp(raj, "pedra") || !strcmp(raj, "tesoura")))
        {
            ans = "Bazinga!";
        }
        else
        {
            ans = "Raj trapaceou!";
        }
    }

    return ans;
}

int main(int argc, char *argv[])
{
    int tamt, i;
    char sheldon[20], raj[20], ans[20];

    scanf("%d", &tamt);

    for (i = 1; i <= tamt; i++)
    {
       scanf("%s %s", sheldon, raj);
       printf("Caso #%d: %s\n", i, solve(ans, sheldon, raj));
    }

    return 0;
}
