#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define Max 100
#define Min -100

int Nhap_Kich_Thuoc_Mang();
void Nhap_X(int &x);
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n, int x);

int main()
{
    int a[Max], n = Nhap_Kich_Thuoc_Mang(), x;
    srand((int)time(NULL));
    Nhap_X(x);
    Nhap_Mang(a, n);
    Xuat_Mang(a, n, x);

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

void Nhap_X(int &x)
{
    printf("Nhap x: ");
    scanf("%2d", &x);
}

void Xuat_Mang(int a[], int n, int x)
{
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
    printf("\nCac phan tu lon hon %d trong mang la: ",x);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > x)
        {
            printf("%2d ", a[i]);
        }
    }
    printf("\nCac phan tu la boi so cua %d trong mang la: ",x);
    for (int i = 0; i < n; i++)
    {
        if (a[i] % x == 0)
        {
            printf("%2d ", a[i]);
        }
    }
}