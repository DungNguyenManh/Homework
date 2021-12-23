#include <stdio.h>
#include <math.h>
#define Max 1000

void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n);
void Dem_So_Nguyen_To(int a[], int n);
// void Tong_So_Chinh_Phuong_Vitri_Le(int a[], int n);
void Dao_Nguoc_Cac_Phan_Tu_Trong_Mang(int a[], int n);
void Xuat_Kq(int a[], int n);

int main()
{
    int n, a[Max];
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    Nhap_Mang(a, n);
    Xuat_Mang(a, n);
    Dem_So_Nguyen_To(a, n);
    // Tong_So_Chinh_Phuong_Vitri_Le(a, n);
    Dao_Nguoc_Cac_Phan_Tu_Trong_Mang(a, n);
    Xuat_Kq(a, n);

    return 0;
}

void Nhap_Mang(int a[], int n) // Nhập mảng
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu mang thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void Xuat_Mang(int a[], int n) // Xuất mảng
{
    printf("Ban vua nhap la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}

bool Kiem_Tra_So_Nguyen_To(int n) // Kiểm tra số nguyên tố
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void Dem_So_Nguyen_To(int a[], int n) //Đếm số nguyên tố
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (Kiem_Tra_So_Nguyen_To(a[i]) == true)
        {
            count++;
        }
    }
    printf("\nCo %d so nguyen to trong mang", count);
}

/*bool Kiem_Tra_So_Chinh_Phuong(int n) // Kiểm tra số chính phương
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
        if (n % i != 0)
        {
            if (Kiem_Tra_So_Chinh_Phuong(a[i]) == true)
            {
                sum += a[i];
            }
        }
    }
    printf("Tong so chinh phuong o vi tri le la: %d", sum);
}*/

void Dao_Nguoc_Cac_Phan_Tu_Trong_Mang(int a[], int n)
{
    for (int i = 0; i <= n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    printf("\nDao nguoc phan tu la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}

bool Kiem_Tra_Mang_Tang_Dan(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] <= a[i])
        {
            return false;
        }
        
    }return true;
}

void Xuat_Kq(int a[], int n)
{
    if (Kiem_Tra_Mang_Tang_Dan(a, n) == false)
    {
        printf("\nMang khong tang dan");
    }
    else
    {
        printf("\nMang a tang dan");
    }
}