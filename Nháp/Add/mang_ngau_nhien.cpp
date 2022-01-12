#include <stdio.h>          // Mảng ngẫu nhiên
#include <stdlib.h>
#include <time.h>

#define Max 100
#define Min 0
void Nhap_Kich_Thuoc_Mang(int &n);
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n);

int main()
{
    int n, a[Max];
    srand((int)time(0));
    Nhap_Kich_Thuoc_Mang(n);
    Nhap_Mang(a, n);
    Xuat_Mang(a, n);

    return 0;
}

void Nhap_Kich_Thuoc_Mang(int &n)
{
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
}

void Nhap_Mang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = Min + rand() % (Max + 1 - Min);
    }
}

void Xuat_Mang(int a[], int n)
{
    printf("Mang ngau nhien la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}
