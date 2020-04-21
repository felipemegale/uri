#include <stdio.h>

void isort(int* arr, int siz)
{
    int i, key, j;

    for (i = 1; i < siz; i++)
    {
        key = arr[i];
        j = i-1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void ssort(int* arr, int siz)
{
    int i, j, min, aux;
    for (i = 0; i < siz-1; i++)
    {
        min = i;
        for (j = (i+1); j < siz; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        if (arr[i] != arr[min])
        {
            aux = arr[i];
            arr[i] = arr[min];
            arr[min] = aux;
        }
    }
}

int main()
{
    int x, y, z, arr[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    x = arr[0];
    y = arr[1];
    z = arr[2];
    
    isort(arr, 3);
    for (int i = 0; i < 3; i++)
        printf("%d\n", arr[i]);

    printf("\n");
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;
}
