#include <stdio.h>

#define Max 100
#define Min 0
void Nhap_Kich_Thuoc_Mang(int &n);
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n);
void Them_Vi_Tri_Cuoi(int a[], int &n);
void Xuat_Mang_Da_Them(int a[], int &n);

int main()
{
    int n, a[Max];
    Nhap_Kich_Thuoc_Mang(n);
    Nhap_Mang(a, n);
    Xuat_Mang(a, n);
    Them_Vi_Tri_Cuoi(a, n);
    Xuat_Mang_Da_Them(a, n);

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

void Them_Vi_Tri_Cuoi(int a[], int &n)
{
    int m;
    printf("\nNhap so muon them vao cuoi mnang: ");
    scanf("%d", &m);
    a[n] = m;
    n++;
}

void Xuat_Mang_Da_Them(int a[], int &n)
{
    printf("Mang sau khi them phan tu cuoi la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}