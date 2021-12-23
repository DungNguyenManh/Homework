#include <stdio.h>

int Nhap_So(char c);
void Kiem_Tra(int n);
void Tong_So_Nguyen(int n);

int main()
{
    int n;
    n = Nhap_So('n');
    printf("Tong cac so <= %d va thoa 1 trong 2 dk la: ", n);
    Tong_So_Nguyen(n);
}

int Nhap_So(char c)
{
    int n;
    printf("Nhap so nguyen duong %c: ", c);
    scanf("%d", &n);
    return n;
}

void Tong_So_Nguyen(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (n >= i && ((i % 3 == 0 && i % 5 == 0) || (i % 3 == 2 && i % 5 == 3)))
        {
            sum += i;
        }
    }
    printf("%d", sum);
}