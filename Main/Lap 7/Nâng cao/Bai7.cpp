#include <stdio.h>

int Nhap_So(int n);
void Liet_Ke(int n);

int main()
{
    int n = Nhap_So(n);

    return 0;
}

int Nhap_So(int n)
{
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
        if (n > 1)
        {
            Liet_Ke(n);
        }
    } while (n > 1);
    printf("Ket thuc chuong trinh");
}

bool Check(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void Liet_Ke(int n)
{
    printf("%d so nguyen to dau tien la: ", n);
    int count = 1;
    int variable = 2;
    while (count <= n)
    {
        if (Check(variable))
        {
            printf("%2d ", variable);
            count++;
        }
        variable++;
    }
}