#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("nhap a, b ,c : ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("phuong trinh co vo so nghiem");
            }
            else
            {
                printf("phuong trinh vo nghiem");
            }
        }
        else
        {
            printf("phuong trinh co nghiem duy nhat x = %.2f", -c / b);
        }
    }
    else
    {
        float delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            printf("phuong trinh vo nghiem");
        }
        else if (delta == 0)
        {
            printf("phuong trinh co nghiem trung nhau : %.2f", -b / (2 * a));
        }
        else
        {
            float x1 = (-b + sqrt(delta)) / 2 * a;
            float x2 = (-b - sqrt(delta)) / 2 * a;
            printf("phuong trinh co hai nghiem: \n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
}