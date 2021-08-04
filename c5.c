#include <stdio.h>

int main()
{
    int n;
    printf("nhap n ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("giai thua  = 1");
    }
    else
    {

        long s = 1;
        for (int i = 1; i <= n; i++)
        {
            s *= i;
        }
        printf("giai thua = %d", s);
    }
}