#include <stdio.h>

int main()
{
    int thang, nam;
    printf("nhap thang , nam : ");
    scanf("%d %d", &thang, &nam);
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
    {
        printf("thang %d nam %d co 31 ngay", thang, nam);
    }
    if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
    {
        printf("thang %d nam %d co 30 ngay", thang, nam);
    }
    if (thang == 2)
    {
        if (nam % 400 == 0 || (nam % 100 != 0 && nam % 4 == 0))
        {
            printf("thang 2 nam %d co 29 ngay", nam);
        }
        else
        {
            printf("thang 2 nam %d co 28 ngay", nam);
        }
    }
}