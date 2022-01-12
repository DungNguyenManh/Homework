#include <stdio.h>

#define Max 100

void Nhap_Kich_Thuoc_Mang(int &n);
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n);
void Giam_Dan(int a[], int n);
void Xuat_Mang_Giam_Dan(int a[], int n);

int main()
{
    int a[Max], n;
    Nhap_Kich_Thuoc_Mang(n);
    Nhap_Mang(a, n);
    Xuat_Mang(a, n);
    Giam_Dan(a, n);
    Xuat_Mang_Giam_Dan(a, n);

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

void Giam_Dan(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                Swaps(a[i], a[j]);
            }
        }
    }
}

void Xuat_Mang_Giam_Dan(int a[], int n)
{
    printf("\nMang giam dan la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}