#include <stdio.h>
#include <time.h>
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

bool Check_Chan_Nhohon20(int n)
{
    if (n % 2 == 0 && n < 20)
    {
        return 1;
    }
    return 0;
}

bool Check_Chan_Am(int n)
{
    if (n % 2 == 0 && n < 0)
    {
        return 1;
    }
    return 0;
}

bool Check_Le_Soduong(int n)
{
    if (n % 2 != 0 && n > 0)
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
    printf("\nCac phan tu nho hon 20 trong mang la: ");
    for (int i = 0; i < n; i++)
    {
        if (Check_Chan_Nhohon20(a[i]))
        {
            printf("%2d ", a[i]);
        }
    }
    printf("\nCac phan tu chan am trong mang la: ");
    for (int i = 0; i < n; i++)
    {
        if (Check_Chan_Am(a[i]))
        {
            printf("%2d ", a[i]);
        }
    }
    printf("\nCac phan tu le duong trong mang la: ");
    for (int i = 0; i < n; i++)
    {
        if (Check_Le_Soduong(a[i]))
        {
            printf("%2d ", a[i]);
        }
    }
}