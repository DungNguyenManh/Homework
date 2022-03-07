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

bool Check_Element_Number(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void Xuat_Mang(int a[], int n)
{
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
    printf("\nCac phan tu la so nguyen to va o vi tri chan la: ");
    for (int i = 0; i < n; i++)
    {
        if (Check_Element_Number(a[i]) && i % 2 == 0)
        {
            printf("%2d ", a[i]);
        }
    }
}