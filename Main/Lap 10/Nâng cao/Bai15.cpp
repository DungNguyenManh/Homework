#include <stdio.h>
#include<math.h>
#include<limits.h>
#define Max 100

void Nhap_Kich_Thuoc_Mang(int &n);
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n);
void Xuat(int a[], int n);
int Min_Le(int a[], int n);
int Max_Chang(int a[], int n);

int main()
{
    int n, a[Max];
    Nhap_Kich_Thuoc_Mang(n);
    Nhap_Mang(a, n);
    Xuat_Mang(a,n);
    Min_Le(a,n);
    Max_Chang(a,n);
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

int Min_Le(int a[], int n)
{
    int min_le = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0 && a[i] < min_le){
            min_le = a[i];
            return min_le;
        }
    }
}

int Max_Chang(int a[], int n)
{
    int max_chang = INT_MIN;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0 && a[i] > max_chang){
            max_chang = a[i];
            return max_chang;
        }
    }
}

void Xuat(int a[], int n)
{
    int max_chang = INT_MIN;
    int min_le = INT_MAX;
    for(int i = 0; i < n; i++){
        if(max_chang < min_le){
            printf("\nSo chan lon nhat nho hon moi gia tri le la: %d",max_chang);
        }
    }
    /*if(max_chang < min_le){
        printf("\nSo chan lon nhat nho hon moi gia tri le la: %d",max_chang);
    }else{
        printf("\nKo co");
    }*/
}