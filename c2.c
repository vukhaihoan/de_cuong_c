#include <stdio.h>

int main()
{
    float n, tocdo;
    printf("nhap gdp nam 2014 :");
    scanf("%f", &n);
    printf("nhap toc do : ");
    scanf("%f", &tocdo);
    int nam = 2014;
    float gdp = n;
    printf("Nam         GDP\n");
    while (gdp <= n * 2)
    {
        printf("%d        %.2f\n", nam, gdp);
        gdp *= tocdo;
        ++nam;
    }
}