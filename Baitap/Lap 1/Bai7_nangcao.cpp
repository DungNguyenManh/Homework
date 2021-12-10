#include <stdio.h>

int main()
{
    float R ; //Đường kính R
    float pi = 3.14;
    printf("Nhap duong kinh R: ");
    scanf("%f", &R);
    printf("Chu vi hinh tron la: %.2f", R * pi);
    printf("\nDien tich hinh tron la: %.2f", (R / 2) * pi);

    return 0;
}