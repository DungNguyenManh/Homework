#include <stdio.h>

int main()
{
    int n, a, b, c;
    do
    {
        printf("Nhap n: ");
        scanf("%d",&n);
        if(n < 100 || n > 999){
            printf("Khong hop le! Nhap lai\n");
        }
    }while(n < 100 || n > 999);
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    int max, min;
    if (a >= b && a >= c)
    {
        max = a;
    }
    if (b >= a && b >= c)
    {
        max = b;
    }
    if (c >= a && c >= b)
    {
        max = c;
    }
    if (a <= b && a <= c)
    {
        min = a;
    }
    if (b <= a && b <= c)
    {
        min = b;
    }
    if (c <= a && c <= b)
    {
        min = c;
    }
    printf("So lon nhi la: %d",a+b+c-max-min);
    



    return 0;
}