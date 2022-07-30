#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Nhap so nguyen duong a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong b: ");
    scanf("%d", &b);
    printf("Nhap so nguyen duong c: ");
    scanf("%d", &c);
    if(a + b > c)
        printf("3 canh tren tao thanh 1 tam giac");
    else if(a + c > b)
        printf("3 canh tren tao thanh 1 tam giac");
    else if( b + c > a)
        printf("3 canh tren tao thanh 1 tam giac");
    else
        printf("3 canh tren khong tao thanh 1 tam giac");

    return 0;
}