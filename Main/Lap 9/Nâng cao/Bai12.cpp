#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

#define Max 100
#define Min -100

int Nhap_Kich_Thuoc_Mang();
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n, int x, int y);
void Nhap_X_Y(int &x, int &y);

int main()
{
    int a[Max], n = Nhap_Kich_Thuoc_Mang(), x, y;
    srand((int)time(NULL));
    Nhap_X_Y(x, y);
    Nhap_Mang(a, n);
    Xuat_Mang(a, n, x, y);

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

void Nhap_X_Y(int &x, int &y)
{
    do
    {
        printf("Nhap x: ");
        scanf("%d", &x);
        printf("Nhap y: ");
        scanf("%d", &y);
        if (!(x < y))
        {
            printf("Khong hop le. Nhap x < y !\n");
        }
    } while (!(x < y));
}

void Xuat_Mang(int a[], int n, int x, int y)
{
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
    printf("\nCac phan tu trong [%d,%d] la: ", x, y);
    for (int i = 0; i < n; i++)
    {
        if (x < a[i] && a[i] < y)
        {
            printf("%2d ", a[i]);
        }
    }
    printf("\nCac phan tu chan trong [%d,%d] la: ", x, y);
    for (int i = 0; i < n; i++)
    {
        if (x < a[i] && a[i] < y && a[i] % 2 == 0)
        {
            printf("%2d ", a[i]);
        }
    }
}