#include <stdio.h>

int main()
{
    int x, y;
    printf("Nhap so x: ");
    scanf("%d", &x);
    printf("Nhap so y: ");
    scanf("%d", &y);
    printf("%d + %d = %d", x, y, x + y);
    printf("\n%d - %d = %d", x, y, x - y);
    printf("\n%d * %d = %d", x, y, x * y);
    printf("\n%d / %d = %.2f", x, y, (float)x / y);

    return 0;
}