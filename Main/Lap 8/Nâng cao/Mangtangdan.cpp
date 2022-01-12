#include<stdio.h>

#define Max 100

void Nhap_Kich_Thuoc_Mang(int &n);
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n);

int main(){
    int a[Max], int n;
    Nhap_Kich_Thuoc_Mang(n);
    Nhap_Mang(a,n);
    Xuat_Mang(a,n);


    return 0;
}

void Nhap_Kich_Thuoc_Mang(int &n)
{
    printf("Nhap kich thuoc mang: ");
    scanf("%d",&n);
}

void Nhap_Mang(int a[], int n)
{
    for(int i = 0; i < n; i++){
        printf("Nhap a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}

void Xuat_Mang(int a[], int n)
{
    printf("Mang vua nhap la: ");
    for(int i = 0; i < n; i++){
        printf("%2d ",a[i]);
    }
}