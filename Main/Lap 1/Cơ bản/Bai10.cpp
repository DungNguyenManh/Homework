#include <stdio.h>

int main()
{
    int a, b;
    printf("Nhap vao so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap vao so nguyen b: ");
    scanf("%d", &b);
    printf("Tong binh phuong cua %d va %d la: %d", a, b, (a + b) * (a + b));

    return 0;
}