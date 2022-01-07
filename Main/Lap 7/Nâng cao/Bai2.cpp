#include <stdio.h>

int main()
{
    int a, b, max, min;
    do
    {
        printf("Nhap a: ");
        scanf("%d", &a);
        printf("Nhap b: ");
        scanf("%d", &b);
        if (!((a >= 0 || b >= 0) && (a % 7 == 0 || b % 7 == 0)))
        {
            printf("Khong hop le. Nhap lai!\n");
        }
    } while (!((a >= 0 || b >= 0) && (a % 7 == 0 || b % 7 == 0)));
    max = a;
    if (a <= b)
    {
        max = b;
        min = a;
    }
    else
    {
        max = a;
        min = b;
    }
    printf("Cac so trong khoang [%d,%d] va chia chan cho 7 la: ", min, max);
    for (int i = min; i <= max; i++)
    {
        if (i % 7 == 0)
        {
            printf("%2d ", i);
        }
    }

    return 0;
}