#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Min 0
#define Max 100

int Nhapkichthuocmang(int n);
void Nhapmangngaunhien(int a[], int n);
void Xuatmang(int a[], int n);
void Tach_cac_chu_so_trong_mang(int a[], int n);

int main()
{
    srand((int)time(0));
    int n = Nhapkichthuocmang(n), a[Max];
    Nhapmangngaunhien(a, n);
    Xuatmang(a, n);
    Tach_cac_chu_so_trong_mang(a,n);

    return 0;
}

int Nhapkichthuocmang(int n)
{
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    return n;
}

void Nhapmangngaunhien(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = Min + rand() % (Max + 1 - Min);
    }
}

void Xuatmang(int a[], int n)
{
    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}

void Tach_cac_chu_so_trong_mang(int a[], int n)
{
    int c[100];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        while(a[i] != 0){
            c[j] = a[i] % 10; 
            j++;
            a[i] /= 10;
        }
    }
    printf("\n");
    Xuatmang(c,j);
}
