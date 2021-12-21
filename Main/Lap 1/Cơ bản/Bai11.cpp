#include <stdio.h>

int main()
{
    int d, m, y;
    printf("Nhap ngay: ");
    scanf("%d", &d);
    printf("Nhap thang: ");
    scanf("%d", &m);
    printf("Nhap nam: ");
    scanf("%d", &y);
    printf("Ban vua nhap la: %d/%d/%d", d, m, y);

    return 0;
}