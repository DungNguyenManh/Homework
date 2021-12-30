#include <stdio.h>

int Nhap_So(int n);
void Up(int n);

int main()
{
    int n;
    n = Nhap_So(n);
    Up(n);

    return 0;
}

int Nhap_So(int n)
{
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if (!(100 <= n && n <= 1000))
        {
            printf("Nhap lai!\n");
        }
    } while (!(100 <= n && n <= 1000));
    return n;
}

void Up(int n)
{
    int a, b, c;
    a = n / 100;
    b = n % 100 / 10;
    c = n % 10;
    if (a > b)
    {
        a += b;
        b = a - b;
        a -= b;
    }
    if (b > c)
    {
        b += c;
        c = b - c;
        b -= c;
    }
    if (a > b)
    {
        a += b;
        b = a - b;
        a -= b;
    }
    printf("Thu tu tang dan cua %d la: %d%d%d", n, a, b, c);
}