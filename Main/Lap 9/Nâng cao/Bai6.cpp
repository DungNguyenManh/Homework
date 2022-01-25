#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

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
// ----------------------------------------------------------------- TĂNG DẦN ---------------------------------
/*void Nhap_Mang(int a[], int n)
{
    int i = 0;
    int max = INT_MIN;
    while (i < n)
    {
        a[i] = Min + rand() % (Max + 1 - Min);
        if (a[i] >= max)
        {
            max = a[i];
            i++;
        }
    }
}*/
// ----------------------------------------------------------------- GIẢM DẦN ---------------------------------
void Nhap_Mang(int a[], int n)
{
    int i = 0;
    int min = INT_MAX;
    while (i < n)
    {
        a[i] = Min + rand() % (Max + 1 - Min);
        if (a[i] <= min)
        {
            min = a[i];
            i++;
        }
    }
}

void Xuat_Mang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}