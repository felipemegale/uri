#include <stdio.h>
#include <math.h>

void isort(double* arr, int siz)
{
    int i, j;
    double key;

    for (i = 1; i < siz; i++)
    {
        key = arr[i];
        j = i-1;
        while(j >= 0 && arr[j] < key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
    double arr[3];
    scanf("%lf %lf %lf", &arr[0], &arr[1], &arr[2]);

    isort(arr,3);

    if (arr[0] >= arr[1] + arr[2])
        printf("NAO FORMA TRIANGULO\n");
    else
    {
        if ((arr[0]*arr[0]) == (arr[1]*arr[1] + arr[2]* arr[2]))
            printf("TRIANGULO RETANGULO\n");
        if ((arr[0]*arr[0]) > (arr[1]*arr[1] + arr[2]* arr[2]))
            printf("TRIANGULO OBTUSANGULO\n");
        if ((arr[0]*arr[0]) < (arr[1]*arr[1] + arr[2]* arr[2]))
            printf("TRIANGULO ACUTANGULO\n");
        if (arr[0] == arr[1] && arr[1]  == arr[2])
            printf("TRIANGULO EQUILATERO\n");
        if ((arr[0] == arr[1] && arr[1] != arr[2]) || (arr[1] == arr[2] && arr[2] != arr[0]))
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
