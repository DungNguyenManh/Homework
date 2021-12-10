#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta;
    printf("Nhap vao he so a: ");
    scanf("%f", &a);
    printf("Nhap vao he so b: ");
    scanf("%f", &b);
    printf("Nhap vao he so c: ");
    scanf("%f", &c);
    if (a == 0)
    {
        if (b == 0)
        {
            printf("Pt vo nghiem");
        }
        else
        {
            printf("Pt co 1 nghiem la: %.2f", -c / b);
        }
    }
    else
    {
        delta = pow(b, 2) - (4 * a * c);
        if (delta == 0)
        {
            printf("Pt co nghiem kep: %.2f", -b / (2 * a));
        }
        else if (delta < 0)
        {
            printf("Pt vo nghiem ");
        }
        else
        {
            printf("Pt co 2 nghiem: \nx1 = %.2f \nx2 = %.2f", -b + sqrt(delta) / (2 * a), -b - sqrt(delta) / (2 * a));
        }
    }

    return 0;
}