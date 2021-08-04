#include <stdio.h>

int main()
{
    float a, b, c, d, e, f;
    printf("nhap a, b, c, d, e, f");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
    float D = a * e - d * b;
    float Dx = c * e - b * f;
    float Dy = a * f - d * c;
    if (D == 0)
    {
        if (Dx == Dy)
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
        float x = Dx / D;
        float y = Dy / D;
        printf("he phuong trinh co nghiem (x, y ) = (%.2f, %.2f)", x, y);
    }
}