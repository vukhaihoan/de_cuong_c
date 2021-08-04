#include <stdio.h>

int main()
{
    // n dong, m cot
    int n, m;
    float arr[100][100];
    printf("nhap n , m :");
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%f", &arr[i][j]);
        }
    }
    float max = arr[0][0], min = arr[0][0];
    printf("ma tran : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%.2f ", arr[i][j]);
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
        printf("\n");
    }
    printf("max : %.2f", max);
    printf("\nmin : %.2f", min);
}