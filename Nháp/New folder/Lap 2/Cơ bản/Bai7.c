#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Nhap vao so nguyen duong a: ");
    scanf("%d", &a);
    printf("Nhap vao so nguyen duong b: ");
    scanf("%d", &b);
    printf("Nhap vao so nguyen duong c: ");
    scanf("%d", &c);
    float p = (a + b + c) / 2;
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("\nBa canh tren tao thanh 1 tam giac\n");
        printf("\nChu vi tam giac la: %d\n", a + b + c);
        printf("Dien tich tam giac la: %.2f", sqrt(p * (p - a) * (p - b) * (p - c)));
    }
    else
    {
        printf("Ba canh tren khong tao thanh 1 tam giac");
    }

    return 0;
}