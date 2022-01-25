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
    printf("Nhap n: ");
    scanf("%d", &n);
    return n;
}

int Check_Element_Number(int n)
{
    int flag = 0;
    if (n < 2)
    {
        return flag;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return flag;
        }
    }
    flag++;
    return flag;
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