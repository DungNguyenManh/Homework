#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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
// --------------------------------------------------------------------------------------------- VỊ TRÍ LẺ NHẬN LẺ, CHẮN NHẬN CHẴN -----------------------------------------
/*void Nhap_Mang(int a[], int n)
{
    int i = 0;
    while (i < n)
    {
        a[i] = Min + rand() % (Max + 1 - Min);
        if ((i % 2 != 0 && a[i] % 2 != 0) || (i % 2 == 0 && a[i] % 2 == 0))
        {
            i++;
        }
    }
}*/
// ------------------------------------------------------------------------------------------ VỊ TRÍ LẺ NHẬN CHẴN, CHẮN NHẬN LẺ -------------------------------------------
void Nhap_Mang(int a[], int n)
{
    int i = 0;
    while (i < n)
    {
        a[i] = Min + rand() % (Max + 1 - Min);
        if ((i % 2 != 0 && a[i] % 2 == 0) || (i % 2 == 0 && a[i] % 2 != 0))
        {
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