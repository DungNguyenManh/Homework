#include <stdio.h>

#define Max 100

void Nhap_Kich_Thuoc(int &n);
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n);
void Xoa_Phan_Tu(int a[], int &n, int vitri);
void Xuat(int a[], int &n);
void Nhap_Lieu(int &vitri);

int main()
{
    int n, a[Max], x, vitri;
    Nhap_Kich_Thuoc(n);
    Nhap_Mang(a, n);
    Xuat_Mang(a, n);
    Nhap_Lieu(vitri);
    Xoa_Phan_Tu(a, n, vitri);
    Xuat(a, n);

    return 0;
}

void Nhap_Kich_Thuoc(int &n)
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

void Nhap_Lieu(int &vitri)
{
    printf("Nhap vi tri muon xoa: ");
    scanf("%d",&vitri);
}   

void Xoa_Phan_Tu(int a[], int &n, int vitri)
{
    n--;
    for (int i = vitri; i < n; i++)
    {
        a[i] = a[i + 1];
    }
}

void Xuat(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%2d ",a[i]);
    }
}