#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("Vi %d > %d nen doi cho 2 so\n", a, b);
        temp = a;
        a = b;
        b = temp;
        printf("a = %d\n", a);
        printf("b = %d", b);
    }
    else
    {
        printf("Vi %d < %d nen 2 so giu nguyen vi tri\n", a, b);
    }

    return 0;
}