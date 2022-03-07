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

bool Check_So_Doi_Xung(int n)
{
    int temp = n, sum = 0;
    while (temp > 0)
    {
        sum = sum * 10 + (temp % 10);
        temp /= 10;
    }
    if (sum == n)
    {
        return 1;
    }
    return 0;
}

bool Check_So_Chinh_Phuong(int n)
{
    if (sqrt(n) * sqrt(n) == n)
    {
        return 1;
    }
    return 0;
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
    printf("\nCac phan tu co vi tri la so nguyen to: ");
    for (int i = 0; i < n; i++)
    {
        if (Check_Element_Number(i))
        {
            printf("%2d ", a[i]);
        }
    }
    printf("\nCac phan tu co vi tri la so doi xung: ");
    for (int i = 0; i < n; i++)
    {
        if (Check_So_Doi_Xung(i))
        {
            printf("%2d ", a[i]);
        }
    }
    printf("\nCac phan tu co vi tri la so chinh phuong: ");
    for (int i = 0; i < n; i++)
    {
        if (Check_So_Chinh_Phuong(i))
        {
            printf("%2d ", a[i]);
        }
    }
    printf("\nCac phan tu co vi tri la so hoan thien: ");
    for (int i = 0; i < n; i++)
    {
        if (Check_So_Hoan_Thien(i))
        {
            printf("%2d ", a[i]);
        }
    }
}