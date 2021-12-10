#include <stdio.h> 

int main()
{
    int n ;
    printf("Nhap vao so nguyen co 3 chu so: ");
    scanf("%d", &n);
    int a, b, c;
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    printf("So hang tram cua %d la: %d", n, a);
    printf("\nSo hang chuc cua %d la: %d", n, b);
    printf("\nSo hang don vicua %d la: %d", n, c);
    int temp = n;
    int sum = 0;
    while (temp > 0)    // tìm số đảo ngược
    { 
        sum = sum * 10 + (temp % 10);
        temp /= 10;
    }
    printf("\nSo dao nguoc cua %d la: %d", n, sum);

    return 0;
}