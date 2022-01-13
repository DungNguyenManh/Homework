#include <stdio.h>

void Nhap_So(int &n);
void Phan_Tich(int n);

int main()
{
    int n;
    Nhap_So(n);
    Phan_Tich(n);

    return 0;
}

void Nhap_So(int &n)
{
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
}

void Phan_Tich(int n)
{
    int i = 2;
    printf("%d = ", n);
    while (n > 1)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            if (n != i)
            {
                printf("* ");
            }
            n /= i;
        }
        else
        {
            i++;
        }
    }
}