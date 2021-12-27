#include <stdio.h>

int main()
{
    int a, b, max;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    max = a;
    if (max < b)
    {
        max = b;
        printf("So lon nhat la: %d", max);
    }
    else
    {
        printf("So lon nhat la: %d", max);
    }

    return 0;
}