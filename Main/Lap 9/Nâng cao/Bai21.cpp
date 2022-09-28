#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define Max 100

void TaoMang(int a[], int n);
void XuatMang(int a[], int n);

int main()
{
    int n, a[Max];
    srand((unsigned int)time(NULL));
    printf("Nhap n: ");
    scanf("%d", &n);
    TaoMang(a, n);
    XuatMang(a, n);

    return 0;
}

void TaoMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
    printf("Mang ngau nhien vua tao la: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}

void XuatMang(int a[], int n)
{
    printf("\n");
    int b[n] = {}, c[n] = {};
    printf("Cac so chan: ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%5d", a[i]);
        }
    }
    printf("\nCac so le: ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            printf("%5d", a[i]);
        }
    }
}