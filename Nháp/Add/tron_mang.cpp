#include <stdio.h>

#define Max 100

void Nhap_Kich_Thuoc_Mang_a(int &n);
void Nhap_Kich_Thuoc_Mang_b(int &m);
void Nhap_Mang_a(int a[], int n);
void Nhap_Mang_b(int b[], int m);
void Tron_Mang(int a[], int b[], int c[], int n, int m, int &l);
void Sap_Xep_Mang_Up(int c[], int &l);
void Xuat_Mang_Tang_Dan(int c[], int &l);

int main()
{
    int a[Max], b[Max], c[Max + Max], n, m, l = 0;
    Nhap_Kich_Thuoc_Mang_a(n);
    Nhap_Mang_a(a, n);
    Nhap_Kich_Thuoc_Mang_b(m);
    Nhap_Mang_b(b, m);
    Tron_Mang(a, b, c, n, m, l);
    Sap_Xep_Mang_Up(c, l);
    Xuat_Mang_Tang_Dan(c, l);

    return 0;
}

void Nhap_Kich_Thuoc_Mang_a(int &n)
{
    printf("Nhap kich thuoc mang a: ");
    scanf("%d", &n);
}

void Nhap_Kich_Thuoc_Mang_b(int &m)
{
    printf("Nhap kich thuoc mang b: ");
    scanf("%d", &m);
}

void Nhap_Mang_a(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void Nhap_Mang_b(int b[], int m)
{
    for (int i = 0; i < m; i++)
    {
        printf("Nhap b[%d]: ", i);
        scanf("%d", &b[i]);
    }
}

void Swaps(int &a, int &b)
{
    a += b;
    b = a - b;
    a -= b;
}

void Tron_Mang(int a[], int b[], int c[], int n, int m, int &l)
{
    for (int i = 0; i < n; i++)
    {
        c[l] = a[i];
        l++;
    }
    for (int j = 0; j < m; j++)
    {
        c[l] = b[j];
        l++;
    }
}

void Sap_Xep_Mang_Up(int c[], int &l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (c[i] > c[j])
            {
                Swaps(c[i], c[j]);
            }
        }
    }
}
void Xuat_Mang_Tang_Dan(int c[], int &l)
{
    printf("Xap xep mang tang dan: ");
    for (int i = 0; i < l; i++)
    {
        printf("%2d ", c[i]);
    }
}