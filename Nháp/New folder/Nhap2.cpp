#include <stdio.h>
#include <math.h>
#define Max 100

void Nhap_mang(int a[], int n);
void Xuat_mang(int a[], int n);
void Tong_So_Chinh_Phuong_Vitri_Le(int a[], int n);



int main()
{
    int n, a[Max];
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    Nhap_mang(a, n);
    printf("Cac so trong mang la: ");
    Xuat_mang(a, n);
    Tong_So_Chinh_Phuong_Vitri_Le(a,n);

    return 0;
}



void Nhap_mang(int a[], int n)     // Nhập mảng
{ 
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu mang thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void Xuat_mang(int a[], int n)     // Xuất mảng
{ 
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}

bool Kiem_Tra_So_Chinh_Phuong(int n) // Kiểm tra số chính phương
{
    if (sqrt(n) * sqrt(n) == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Tong_So_Chinh_Phuong_Vitri_Le(int a[], int n) // Tổng số chính phương ở vị trí lẻ
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        
        
            if (Kiem_Tra_So_Chinh_Phuong(a[i]) == true)
            {
                sum += a[i];
            }
        
    }
    printf("Tong so chinh phuong o vi tri le la: %d", sum);
}