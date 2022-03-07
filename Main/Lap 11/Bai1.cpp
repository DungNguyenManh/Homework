#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define Max 100
#define Min 0

void Nhap_Kich_Thuoc_Mang(int &n);
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n);
void Nhap_Lieu(int &x, int &vitri);
void Them_Phan_Tu(int a[], int &n, int x, int vitri);
void Xuat_Mang_Vua_Them(int a[], int n);

int main()
{
    srand((int)time(NULL));
    int n, a[Max], x, vitri;
    Nhap_Kich_Thuoc_Mang(n);
    Nhap_Mang(a, n);
    Xuat_Mang(a, n);
    Nhap_Lieu(x, vitri);
    Them_Phan_Tu(a, n, x, vitri);
    Xuat_Mang_Vua_Them(a, n);

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
        a[i] = Min + rand() % (Max + 1 - Min);
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

void Nhap_Lieu(int &x, int &vitri)
{
    printf("\nNhap phan tu muon them: ");
    scanf("%d", &x);
    printf("Nhap vi tri muon them phan tu: ");
    scanf("%d", &vitri);
}

void Them_Phan_Tu(int a[], int &n, int x, int vitri)
{
    n++;
    for (int i = n; i > vitri; i--)
    {
        a[i] = a[i - 1];
    }
    a[vitri] = x;
}

void Xuat_Mang_Vua_Them(int a[], int n)
{
    printf("Mang sau khi them la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}