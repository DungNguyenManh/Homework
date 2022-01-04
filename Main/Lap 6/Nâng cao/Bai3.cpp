#include <stdio.h>
#include <math.h>

int Nhap_So(int n);
void Kq(int n);

int main()
{
    int n = Nhap_So(n);
    Kq(n);

    return 0;
}

int Nhap_So(int n)
{
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    return n;
}

void Kq(int n)
{
    int i = 1, count = 0;
    ;
    while (i < n / 2)
    {
        if (pow(2, i) <= n)
        {
            count++;
        }
        else
        {
            break;
        }
        i++;
    }
    printf("%d co dang 2^%d", n, count);
}