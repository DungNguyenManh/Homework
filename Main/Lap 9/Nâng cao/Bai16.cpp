#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define Max 100

void NhapMang(int n, int a[]);
void XuatMang(int n, int a[]);
void Find_Lonhon_x(int n, int a[], int x);

int main()
{
    int n, a[Max], x;
    srand((unsigned int)time(NULL));
    printf("Nhap n: ");
    scanf("%d", &n);
    NhapMang(n, a);
    XuatMang(n, a);
    printf("\nNhap tham so x: ");
    scanf("%d", &x);
    Find_Lonhon_x(n, a, x);

    return 0;
}

void NhapMang(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
}

void XuatMang(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}

void Find_Lonhon_x(int n, int a[], int x)
{
    printf("Cac so lon hon %d la: ", x);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > x)
            printf("%2d ", a[i]);
    }
}