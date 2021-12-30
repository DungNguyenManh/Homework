#include <stdio.h>

int Nhap_So(int n);
void Lucky_Number(int n);

int main()
{
    int n;
    n = Nhap_So(n);
    Lucky_Number(n);

    return 0;
}

int Nhap_So(int n)
{
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    return n;
}

bool Check_Lucky_Number(int n)
{
    int i;
    while (n > 0)
    {
        i = n % 10;
        if (!(i == 8 || i == 6))
        {
            return 0;
        }

        n /= 10;
    }
    return 1;
}

void Lucky_Number(int n)
{
    if (Check_Lucky_Number(n))
    {
        printf("La so may man");
    }
    else
    {
        printf("Khong phai so may man");
    }
}