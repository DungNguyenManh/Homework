#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, e, f, D, Dx, Dy;
    printf("Nhap vao he so a: ");
    scanf("%f", &a);
    printf("Nhap vao he so b: ");
    scanf("%f", &b);
    printf("Nhap vao he so c: ");
    scanf("%f", &c);
    printf("Nhap vao he so d: ");
    scanf("%f", &d);
    printf("Nhap vao he so e: ");
    scanf("%f", &e);
    printf("Nhap vao he so f: ");
    scanf("%f", &f);
    D = a * e - d * b;
    Dx = c * e - f * b;
    Dy = a * f - d * c;
    if (D == 0)
    {
        if (Dx != 0 || Dy != 0)
        {

            printf("He pt vo nghiem");
        }
        if (Dx == Dy)
        {
            printf("He pt vo nghiem");
        }
    }
    else if (D != 0)
    {
        printf("x1 = %.2f \nx2 = %.2f", Dx / D, Dy / D);
    }

    return 0;
}