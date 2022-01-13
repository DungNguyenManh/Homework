#include <stdio.h>

#define Max 100

void Nhap_Kich_Thuoc_Mang_a(int &n);
void Nhap_Kich_Thuoc_Mang_b(int &m);
void Nhap_Mang_a(int a[], int n);
void Nhap_Mang_b(int b[], int m);
void Xuat_Mang_a(int a[], int n);
void Xuat_Mang_b(int b[], int m);
void Trong_Mang(int a[], int b[], int c[], int n, int m, int &l);

int main()
{
    int a[Max], b[Max], c[Max+Max], n, m, l = 0;
    Nhap_Kich_Thuoc_Mang_a(n);
    Nhap_Mang_a(a,n);
    Nhap_Kich_Thuoc_Mang_b(m);
    Nhap_Mang_b(b,m);
    Xuat_Mang_a(a,n);
    Xuat_Mang_b(b,m);
    Trong_Mang(a,b,c,n,m,l);

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

void Xuat_Mang_a(int a[], int n)
{
    printf("Mang a la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}

void Xuat_Mang_b(int b[], int m)
{
    printf("\nMang b la: ");
    for (int i = 0; i < m; i++)
    {
        printf("%2d ", b[i]);
    }
}

void Swaps(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Trong_Mang(int a[], int b[], int c[], int n, int m, int &l)
{
    for(int i = 0; i < n; i++){
        c[l] = a[i];
        l++;
    }
    for(int i = 0; i < m; i++){
        c[l] = b[i];
        l++;
    }
    printf("\nMang c la: ");
    for(int i = 0; i < l; i++){
        printf("%2d ",c[i]);
    }
    for(int i = 0; i < l; i++){
        for(int j = i+1; j <l; j++){
            if(c[i] > c[j]){
                Swaps(c[i],c[j]);
            }
        }
    }
    printf("\nMang c sau khi sap xep tang dan la: ");
    for(int i = 0; i < l; i++){
        printf("%2d ",c[i]);
    }
}