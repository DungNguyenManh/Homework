#include <stdio.h>

int main()
{
    int a, n, cs;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap cs: ");
    scanf("%d", &cs);
    while (a < n)
    {
        printf("%2d ", a);
        a += cs;
    }

    return 0;
}