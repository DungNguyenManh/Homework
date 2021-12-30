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
    for (float i = 0; i <= n; i++)
    {
        sum += (2 * i + 1) / (2 * i + 2);
    }
    printf("Tong cac so tu 1/2 den %d/%d la: %.2f", 2 * n + 1, 2 * n + 2, sum);
}