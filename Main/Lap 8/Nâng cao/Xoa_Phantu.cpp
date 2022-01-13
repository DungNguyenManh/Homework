#include <stdio.h>
#include<limits.h>

#define Max 100

void Nhap_Kich_Thuoc_Mang(int &n);
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n);
void Xoa_Phan_Tu(int a[], int &n);
void Xuat_Mang_Da_Xoa(int a[], int &n);

int main()
{
    int a[Max], n, vitri;
    Nhap_Kich_Thuoc_Mang(n);
    Nhap_Mang(a, n);
    Xuat_Mang(a, n);
    Xoa_Phan_Tu(a,n);
    Xuat_Mang_Da_Xoa(a,n);

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

void Xoa_Phan_Tu(int a[], int &n)
{
    int deleted;
    printf("\nNhap vi tri can xoa: ");
    scanf("%d",&deleted);
    for(int i = deleted; i < n; i++){
        a[i] = a[i+1];
    }
    n--;
}

void Xuat_Mang_Da_Xoa(int a[], int &n)
{
    printf("Mang da xoa la: ");
    for(int i = 0; i < n; i++){
        printf("%2d ",a[i]);
    }
}