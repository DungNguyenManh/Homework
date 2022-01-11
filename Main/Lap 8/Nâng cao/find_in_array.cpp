#include <stdio.h>

#define Max 100
#define Min 0
void Nhap_Kich_Thuoc_Mang(int &n);
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n);
bool Check_Yeu_Cau(int a[], int n, int find);
void Xuat_KQ(int a[], int n);

int main()
{
    int n, a[Max], find;
    Nhap_Kich_Thuoc_Mang(n);
    Nhap_Mang(a, n);
    Xuat_Mang(a, n);
    Check_Yeu_Cau(a, n, find);
    Xuat_KQ(a, n);

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
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void Xuat_Mang(int a[], int n)
{
    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}

bool Check_Yeu_Cau(int a[], int n, int find)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == find)
        {
            return 1;
        }
    }
    return 0;
}

void Xuat_KQ(int a[], int n)
{
    int find;
    printf("\nNhap so can tim: ");
    scanf("%d", &find);
    if (Check_Yeu_Cau(a, n, find))
    {
        printf("Co!");
    }
    else
    {
        printf("Khong co!");
    }
}
