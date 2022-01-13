#include <stdio.h>

int Nhap_So(int n);
void Element_Number(int n);

int main()
{
    int n = Nhap_So(n);
    Element_Number(n);

    return 0;
}

int Nhap_So(int n)
{
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    return n;
}

bool Check_Element_Number(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i < n; i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void Element_Number(int n)
{
    if (Check_Element_Number(n))
    {
        printf("%d la so nguyen to", n);
    }
    else
    {
        printf("%d khong phai la so nguyen to", n);
    }
}