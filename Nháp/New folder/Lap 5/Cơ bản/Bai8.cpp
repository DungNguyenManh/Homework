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
    float sum = 0;
    for (float i = 1; i <= n; i++)
    {
        sum += i / (i + 1);
    }
    printf("Tong cac so tu 1/2 den %d/%d la: %.2f", n, n + 1, sum);
}