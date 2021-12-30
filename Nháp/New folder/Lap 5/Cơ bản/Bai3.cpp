#include <stdio.h>

int Nhap_So(int n);
void Sum(int n);

int main()
{
    int n;
    n = Nhap_So(n);
    Sum(n);

    return 0;
}

int Nhap_So(int n)
{
    printf("Nhap n: ");
    scanf("%d", &n);
    return n;
}

void Sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Tong cac so tu 1 den %d la: %d", n, sum);
}