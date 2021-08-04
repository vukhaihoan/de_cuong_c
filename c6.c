#include <stdio.h>

int main()
{
    int a, b;
    printf("nhap a, b :");
    scanf("%d %d", &a, &b);
    int c = a;
    int d = b;
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    printf("boi chung nho nhat : %d", d * c / a);
}