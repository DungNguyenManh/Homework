#include <stdio.h>
#include <math.h>
#define Max 100

void Nhap_mang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void Xuat_mang1(int a[], int n)  //Các phần tử có giá trị chẵn và nhỏ hơn 20
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] < 20)
        {
            printf("%2d ", a[i]);
        }
    }
}

void Xuat_mang2(int a[], int n)  //Các phần tử có giá trị chẵn và nhỏ hơn 0
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] < 0)
        {
            printf("%2d ", a[i]);
        }
    }
}

void Xuat_mang3(int a[], int n)  //Các phần tử có giá trị lẽ và là số dương
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1 && a[i] >= 0)
        {
            printf("%2d ", a[i]);
        }
    }
}

int main()
{
    int n, a[Max];
    printf("Nhap vao kich thuoc mang: ");
    scanf("%d", &n);
    Nhap_mang(a, n);
    printf("Cac phan tu chan nho hon 20 la: ");
    Xuat_mang1(a, n);
    printf("\nCac phan tu chan nho hon 0 la: ");
    Xuat_mang2(a,n);
    printf("\nCac phan tu le va >= 0 la: ");
    Xuat_mang3(a,n);

    return 0;
}