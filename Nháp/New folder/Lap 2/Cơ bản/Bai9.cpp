#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;
    printf("Nhap vao a: ");
    scanf("%f", &a);
    printf("Nhap vao b: ");
    scanf("%f", &b);
    if (a == 0)
    {
        if (b == 0)
        {
            printf("Pt vo so nghiem");
        }
        else
        {
            printf("Pt vo nghiem");
        }
    }
    else
    {
        printf("x = %.2f", -b / a);
    }

    return 0;
}