#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max 100

void NhapXuatMang(int a[], int n);
void LietKe(int a[], int n, int x);

int main()
{
    int n, a[Max], x;
    srand((unsigned int)time(NULL));
    printf("Nhap n: ");
    scanf("%d", &n);
    NhapXuatMang(a, n);
    printf("\nNhap tham so x: ");
    scanf("%d", &x);
    LietKe(a, n, x);

    return 0;
}

void NhapXuatMang(int a[], int n)
{
    int tu = -10, den = 10;
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
    printf("Mang vua tao la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}

bool CheckElementNumber(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void LietKe(int a[], int n, int x)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (CheckElementNumber(a[i]) && a[i] > x)
        {
            printf("%2d ", a[i]);
            flag = 1;
        }
    }
    if (flag == 0)
        printf("Mang khong chua SNT < %d", x);
}