#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

#define Max 100
#define Min -100

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

bool Check_So_Hoan_Thien(int n)
{
    int sum = 0;
    if (n == 0)
    {
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return 1;
    }
    return 0;
}

void Xuat_Mang(int a[], int n)
{
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
    printf("\nCac phan tu tai vi tri le la: ");
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%2d ", a[i]);
        }
    }
    printf("\nCac phan tu tai vi tri chan la: ");
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%2d ", a[i]);
        }
    }
    printf("\nCac phan tu tai vi tri so hoan thien la: ");
    for (int i = 0; i < n; i++)
    {
        if (Check_So_Hoan_Thien(i))
        {
            printf("%2d ", a[i]);
        }
    }
}