#include <stdio.h>

int main()
{
    int n;
    float arr[100];
    printf("nhap n : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
    float max = arr[0], min = arr[0];
    int vitrimax = 0, vitrimin = 0;

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            vitrimax = i;
        }
        if (min > arr[i])
        {
            min = arr[i];
            vitrimin = i;
        }
    }
    printf("max = %.2f min = %.2f", max, min);
}