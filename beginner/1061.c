#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SECS_IN_DAY 86400

int main()
{
    int i, d, hrs, min, sec, begtim, endtim, timdif;
    char day[10], time[15];
    char *tok;

    for (i = 0; i < 2; i++)
    {
        fgets(day, 10, stdin);
        fgets(time, 15, stdin);
        day[strcspn(day, "\n")] = '\0';
        time[strcspn(time, "\n")] = '\0';

        d = atoi(&day[4]) * 24 * 3600;
        tok = strtok(time, " : ");
        hrs = atoi(tok) * 3600;
        tok = strtok(NULL, " : ");
        min = atoi(tok) * 60;
        tok = strtok(NULL, " : ");
        sec = atoi(tok);

        if (i == 0)
            begtim = d + hrs + min + sec;
        else
            endtim = d + hrs + min + sec;

    }

    timdif = endtim - begtim;

    d = timdif / SECS_IN_DAY;
    hrs = (timdif % SECS_IN_DAY) / 3600;
    min = (timdif % SECS_IN_DAY) % 3600 / 60;
    sec = (timdif % SECS_IN_DAY) % 3600 % 60;

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", hrs);
    printf("%d minuto(s)\n", min);
    printf("%d segundo(s)\n", sec);

    return 0;
}
