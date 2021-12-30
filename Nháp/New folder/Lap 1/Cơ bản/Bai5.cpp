#include <stdio.h>
#define Pi 3.14

int main()
{
    float r;
    printf("Nhap ban kinh r: ");
    scanf("%f", &r);
    printf("Chu vi hinh tron la: %.2f", 2 * r * Pi);
    printf("\nDien tich hinh tron la: %.2f", Pi * r * r);

    return 0;
}