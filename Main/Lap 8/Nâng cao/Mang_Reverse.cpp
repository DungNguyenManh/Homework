#include <stdio.h>

#define Max 100

void Nhap_Kich_Thuoc_Mang(int &n);
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n);
void In_Mang_Dao_Nguoc(int a[], int n);
void Dao_Nguoc_Mang(int a[], int n);
void Mang_Dao_Nguoc(int a[], int n);

int main()
{
    int a[Max], n;
    Nhap_Kich_Thuoc_Mang(n);
    Nhap_Mang(a, n);
    Xuat_Mang(a, n);
    In_Mang_Dao_Nguoc(a,n);
    Dao_Nguoc_Mang(a,n);
    Mang_Dao_Nguoc(a,n);

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

void In_Mang_Dao_Nguoc(int a[], int n)
{
    printf("\nIn nguoc mang: ");
    for(int i = n-1; i >= 0; i--){
        printf("%2d ",a[i]);
    }
}

void Dao_Nguoc_Mang(int a[], int n)
{
    for(int i = 0; i < n/2; i++){
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}

void Mang_Dao_Nguoc(int a[], int n)
{
    printf("\nMang dao nguoc la: ");
    for(int i = 0; i < n; i++){
        printf("%2d ",a[i]);
    }
}