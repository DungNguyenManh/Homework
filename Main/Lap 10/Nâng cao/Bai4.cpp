#include <stdio.h>
#include<math.h>
#define Max 100

void Nhap_Kich_Thuoc_Mang(int &n);
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n);
void Xuat(int a[], int n);

int main()
{
    int n, a[Max];
    Nhap_Kich_Thuoc_Mang(n);
    Nhap_Mang(a, n);
    Xuat_Mang(a,n);
    Xuat(a,n);


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
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%2d ", a[i]);
    }
}

bool Check_Tang(int a[], int n)
{
    for(int i = 0; i < n; i++){
        if(a[i] > a[i+1]){
            return 0;
        }
    }
    return 1;
}

void Xuat(int a[], int n)
{
    if(Check_Tang(a,n)){
        printf("Mang tang dan");
    }else{
        printf("Mang ko tang dan");
    }
}