#include <stdio.h>

int Nhap_So(int n);
void Position_Max(int n);

int main()
{
    int n;
    n = Nhap_So(n);
    Position_Max(n);
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

void Position_Max(int n)
{
    int a, b, c;
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    if (a >= b && a >= c)
    {
        printf("Position Max: hang tram");
    }
    else
    {
        if (b >= c)
        {
            printf("Position Max: hang chuc");
        }
        else
        {
            printf("Position Max: hang don vi");
        }
    }
}