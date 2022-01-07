#include <stdio.h>

int Nhap_So(int n);
void Cac_Uoc_So(int n);

int main()
{
    int n = Nhap_So(n);

    return 0;
}

int Nhap_So(int n)
{
    int sum = 0;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        sum += n;
    } while (!(n == 0));
    printf("Tong cac so vua nhap la: %d", sum);

    return sum;
}