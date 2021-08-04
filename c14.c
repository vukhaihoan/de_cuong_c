#include <stdio.h>
float a[100][100];
float b[100][100];
float matrantich[100][100];
int n, p, m;
void nhap()
{
    printf("nhap n, p, m : ");
    scanf("%d %d %d", &n, &p, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%f", &b[i][j]);
        }
    }
}

void tinhtich()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrantich[i][j] = 0;
            for (int k = 0; k < p; k++)
            {
                matrantich[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
void hienthi()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%.2f  ", matrantich[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    nhap();
    tinhtich();
    hienthi();
}