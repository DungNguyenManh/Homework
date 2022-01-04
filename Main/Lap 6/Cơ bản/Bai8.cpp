#include <stdio.h>

int Nhap_So(int n);
void Dem_So(int n);

int main()
{
    int n = Nhap_So(n);
    Dem_So(n);

    return 0;
}

int Nhap_So(int n)
{
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    return n;
}

int Frist_Number(int n)
{
    while (n >= 10)
    {
        n /= 10;
    }
    return n;
}

void Dem_So(int n)
{
    int count = 0;
    while (n > 0)
    {
        if (n % 10 == Frist_Number(n))
        {
            count++;
        }
        n /= 10;
    }
    printf("Co %d chu so giong chu so dau tien", count);
}