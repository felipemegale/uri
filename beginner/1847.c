#include <stdio.h>
#include <stdlib.h>

void happy()
{
    printf(":)\n");
}

void sad()
{
    printf(":(\n");
}

void solve(int t1, int t2, int t3)
{
    int dt2t1 = t2 - t1;
    int dt3t2 = t3 - t2;

    if (dt2t1 < 0)
    {
        if (dt3t2 >= 0) happy();
        else
        {
            if (abs(dt3t2) < abs(dt2t1)) happy();
            else sad();
        }
    }
    else if (dt2t1 > 0)
    {
        if (dt3t2 <= 0) sad();
        else
        {
            if (abs(dt3t2) < abs(dt2t1)) sad();
            else happy();
        }
    }
    else if (dt3t2 == 0 && dt3t2 == dt2t1)
    {
        sad();
    }
    else
    {
        if (dt3t2 < 0) sad();
        if (dt3t2 > 0) happy();
    }
}

int main(int argc, char **argv)
{
    int t1, t2, t3;
    
    scanf("%d %d %d", &t1, &t2, &t3);

    solve(t1, t2, t3);
}
