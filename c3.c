#include <stdio.h>

int main()
{
    int n;
    float arr[100];
    printf("nhap N : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
    printf("day so ban dau : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                float cmp = arr[i];
                arr[i] = arr[j];
                arr[j] = cmp;
            }
        }
    }
    printf("\nday so da sap xep : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", arr[i]);
    }
}