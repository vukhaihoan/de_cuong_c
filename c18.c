#include <stdio.h>

void nhapn(int *n)
{
    printf("nhap n : ");
    scanf("%d", n);
}

void tinh(int arr[100][100], int n)
{
    int begin = 0, end = n, value = 1;
    while (end > n / 2)
    {
        int i = begin;
        for (int j = begin; j <= end - 1; j++)
        {
            arr[i][j] = value;
            value++;
        }
        int j = end - 1;
        for (int i = begin + 1; i <= end - 1; i++)
        {
            arr[i][j] = value;
            value++;
        }
        i = end - 1;
        for (int j = end - 2; j >= begin; j--)
        {
            arr[i][j] = value;
            value++;
        }
        j = begin;
        for (int i = end - 2; i >= begin + 1; i--)
        {
            arr[i][j] = value;
            value++;
        }
        begin++;
        end--;
    }
}
void hienthi(int arr[100][100], int n)
{
    printf("danh sach : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    nhapn(&n);
    int arr[100][100];
    tinh(arr, n);
    hienthi(arr, n);
}