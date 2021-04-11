#include <stdio.h>
#include <stdlib.h>

int findminpos(int *nums, int namt)
{
    int i;
    int minpos = 0;
    int minnum = nums[0];
    
    for (i = 0; i < namt; i++)
    {
        if (nums[i] < minnum)
        {
            minnum = nums[i];
            minpos = i;
        }
    }

    return minpos + 1;
}

void solve()
{
    int namt, i, minpos;
    int *nums;

    scanf("%d", &namt);

    nums = (int*)malloc(sizeof(int) * namt);

    for (i = 0; i < namt; i++)
    {
        scanf("%d", &nums[i]);
    }

    minpos = findminpos(nums, namt);
    
    printf("%d\n", minpos);
}

int main(int argc, char **argv)
{
    solve();
    return 0;
}
