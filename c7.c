#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("nhap a, b, c : ");
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && c + b > a)
    {
        bool vuong = a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a * a;
        bool can = a == b || b == c || c == a;
        if (vuong && can)
        {
            printf("tam giac vuong can");
        }
        else if (vuong)
        {
            printf("tam giac vuong");
        }
        else if (a == b && c == a)
        {
            printf("tam giac deu");
        }

        else if (can)
        {
            printf("tam giac can");
        }

        else
        {
            printf("tam giac thuong");
        }
    }
    else
    {
        printf("khong phai tam giac");
    }
}