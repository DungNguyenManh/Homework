#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Max 100
#define Min 0

void Nhap_Kich_Thuoc_Mang(int &n);
void Tao_Mang_Ngau_Nhien(int a[], int n);
void Xuat_Mang_Ngau_Nhien(int a[], int n);

int main(){
    srand((int) time(0)); 
    int a[Max], n;
    Nhap_Kich_Thuoc_Mang(n);
    Tao_Mang_Ngau_Nhien(a,n);
    Xuat_Mang_Ngau_Nhien(a,n);

    return 0;
}

void Nhap_Kich_Thuoc_Mang(int &n)
{
    printf("Nhap kich thuoc mang: ");
    scanf("%d",&n);
}

void Tao_Mang_Ngau_Nhien(int a[], int n)
{
    for(int i = 0; i < n; i++){
        a[i] = Min + rand() % (Max+1-Min);
    }
}

void Xuat_Mang_Ngau_Nhien(int a[], int n){
    printf("Mang ngau nhien la: ");
    for(int i = 0; i < n; i++){
        printf("%2d ", a[i]);
    }
}