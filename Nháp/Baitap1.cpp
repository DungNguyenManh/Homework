#include <stdio.h>
#include <math.h>
#define Max 100

void Nhap_mang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void Xuat_mang_le(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            printf("%2d ", a[i]);
        }
    }
}

void Xuat_mang_chang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%2d ", a[i]);
        }
    }
}

void Xuat_mang_am(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf("%2d ", a[i]);
        }
    }
}

void Xuat_mang_duong(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            printf("%2d ", a[i]);
        }
    }
}

int main()
{
    int n, a[Max];
    printf("Nhap vao kich thuoc mang: ");
    scanf("%d", &n);
    Nhap_mang(a, n);
    printf("Cac phan tu le la: ");
    Xuat_mang_le(a, n);
    printf("\nCac phan tu chang la: ");
    Xuat_mang_chang(a, n);
    printf("\nCac phan tu am la: ");
    Xuat_mang_am(a, n);
    printf("\nCac phan tu duong la: ");
    Xuat_mang_duong(a, n);

    return 0;
}