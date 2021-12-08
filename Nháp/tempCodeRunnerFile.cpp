#include <stdio.h>
#define Max 100

void Nhap_mang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

bool Kiemtra_songuyento(int n) // Kiểm tra số nguyên tố
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

void Xuat_songuyento(int a[], int n) // Xuất số nguyên tố
{
    for (int i = 0; i < n; i++)
    {
        if (Kiemtra_songuyento(a[i]) == 1)
        {
            printf("%2d ", a[i]);
        }
    }
}

bool Kiemtra_sodoixung(int n)
{
    int temp = n;
    int sum = 0;
    while (temp > 0)
    {
        sum = sum * 10 + (temp % 10);
        temp /= 10;
    }
    if (sum == n)
    {
        return 1;
    }
    return 0;
}

void Sodoixung(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (Kiemtra_sodoixung(n) == 1)
        {
            printf("%2d", a[i]);
        }
    }
}

int main()
{
    int n, a[Max];
    printf("Nhap vao kich thuoc mang: ");
    scanf("%d", &n);
    Nhap_mang(a, n);
    printf("Cac so nguyen to trong mang la: ");
    Xuat_songuyento(a, n);
    printf("\nSo doi xung co trong mang la: ");
    Sodoixung(a, n);

    return 0;
}