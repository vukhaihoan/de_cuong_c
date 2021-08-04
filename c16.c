//3h50 3h57
#include <stdio.h>

int main()
{
    int n, m;
    int a[100], b[100], c[100];
    printf("nhap n, m : ");
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        c[k] = a[i] + b[j];
        k++;
        i++;
        j++;
    }
    while (i < n)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j < m)
    {
        c[k] = b[j];
        k++;
        j++;
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
}