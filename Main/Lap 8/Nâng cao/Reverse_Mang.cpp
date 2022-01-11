#include <stdio.h>

#define Max 100
#define Min 0
void Nhap_Kich_Thuoc_Mang(int &n);
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n);
void Reverse(int a[], int n);
void Xuat_Mang_Reverse(int a[], int n);

int main()
{
    int n, a[Max];
    Nhap_Kich_Thuoc_Mang(n);
    Nhap_Mang(a, n);
    Xuat_Mang(a, n);
    Reverse(a, n);
    Xuat_Mang_Reverse(a, n);

    return 0;
}

void Nhap_Kich_Thuoc_Mang(int &n)
{
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
}

void Nhap_Mang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void Xuat_Mang(int a[], int n)
{
    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}

void Swaps(int &a, int &b)
{
    a += b;
    b = a - b;
    a -= b;
}

void Reverse(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        Swaps(a[i], a[n - i - 1]);
    }
}

void Xuat_Mang_Reverse(int a[], int n)
{
    printf("\nMang dao nguoc la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}