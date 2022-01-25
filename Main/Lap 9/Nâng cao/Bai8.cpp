#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define Max 100
#define Min 0

int Nhap_Kich_Thuoc_Mang();
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n);

int main()
{
    int a[Max], n = Nhap_Kich_Thuoc_Mang();
    srand((int)time(NULL));
    Nhap_Mang(a, n);
    Xuat_Mang(a, n);

    return 0;
}

int Nhap_Kich_Thuoc_Mang()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (!(5 < n && n < 200))
    {
        printf("Khong hop le. Nhap lai!\n");
        return Nhap_Kich_Thuoc_Mang();
    }
    else
    {
        return n;
    }
}

void Nhap_Mang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = Min + rand() % (Max + 1 - Min);
    }
}

void Xuat_Mang(int a[], int n)
{   printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
        
    }
    printf("\nCac phan tu 'le' trong mang la: ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%2d ", a[i]);
        }
    }
    printf("\nCac phan tu 'chan' trong mang la: ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%2d ", a[i]);
        }
    }
}