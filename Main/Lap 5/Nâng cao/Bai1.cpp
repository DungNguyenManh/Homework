#include <stdio.h>

int Nhap_So(int n);
void Odd_Number(int n);

int main()
{
    int n;
    n = Nhap_So(n);
    Odd_Number(n);

    return 0;
}

int Nhap_So(int n)
{
    printf("Nhap n: ");
    scanf("%d", &n);
    return n;
}

bool Check_Odd(int n)
{
    int i;
    while (n > 0)
    {
        i = n % 10;
        if (i % 2 == 0)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

void Odd_Number(int n)
{
    if (Check_Odd(n))
    {
        printf("%d toan le", n);
    }
    else
    {
        printf("%d khong toan le", n);
    }
}