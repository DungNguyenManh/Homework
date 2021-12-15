#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Nhap vao so a: ");
    scanf("%d", &a);
    printf("Nhap vao so b: ");
    scanf("%d", &b);
    printf("Nhap vao so c: ");
    scanf("%d", &c);
    if (a >= b && a <= c)
    {
        printf("So lon nhi la: %d", a);
    }
    else if (b >= a && b <= c)
    {
        printf("So lon nhi la: %d", b);
    }
    else
    {
        printf("So lon nhi la: %d", c);
    }

    return 0;
}