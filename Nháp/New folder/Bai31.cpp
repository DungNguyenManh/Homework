#include <stdio.h>

void Xuat_kq(int n);

int main()
{
    int n, sum = 0;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    Xuat_kq(n);

    return 0;
}

bool Kiem_tra_so_nguyento(int n)
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

void Xuat_kq(int n)
{
    if (Kiem_tra_so_nguyento(n) == 1)
    {
        printf("%d la so nguyen to", n);
    }
    else
    {
        printf("%d khong phai la so nguyen to", n);
    }
}