#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    printf("Nhap so c: ");
    scanf("%d", &c);
    if (a >= b && a >= c)
    {
        printf("So lon nhat la: %d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("So lon nhat la: %d", b);
    }
    else
    {
        printf("So lon nhat la: %d", c);
    }

    return 0;
}