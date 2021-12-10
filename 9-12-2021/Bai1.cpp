#include <stdio.h>
#define Max 100

void Nhap_mang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void Xuat_mang(int a[], int n, int x, int y) // Các giá trị trong mảng nằm trong khoảng [x,y]
{
    printf("Cac gia tri trong [x,y] la: ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= x && a[i] <= y)
        {
            printf("%2d", a[i]);
        }
    }
}

void Xuat_mang_cac_so_chan(int a[], int n, int x, int y)  // Các giá trị chẵn trong khoảng [x,y]
{
    printf("\nCac gia tri trong [x,y] va la so chan la: ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= x && a[i] <= y && a[i] % 2 == 0)
        {
            printf("%2d", a[i]);
        }
    }
}

int main()
{
    int n, a[Max], x, y;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    printf("Nhap gia tri x: ");
    scanf("%d", &x);
    printf("Nhap gia tri y: ");
    scanf("%d", &y);
    Nhap_mang(a, n);
    Xuat_mang(a, n, x, y);
    Xuat_mang_cac_so_chan(a,n,x,y);

    return 0;
}