#include <stdio.h>
#include<limits.h>

#define Max 100

void Nhap_Kich_Thuoc_Mang(int &n);
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n);
void Second_Min(int a[], int n);

int main()
{
    int a[Max], n, flag;
    Nhap_Kich_Thuoc_Mang(n);
    Nhap_Mang(a, n);
    Xuat_Mang(a, n);
    Second_Min(a,n);

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

void Second_Min(int a[], int n)
{
    int min = INT_MAX;
    int min_2 = INT_MAX;
    for(int i = 0; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i] == min){
            continue;
        }else{
            if(a[i] < min_2){
                min_2 = a[i];
            }
        }
    }
    printf("\nNho thu 2 la: %d",min_2);
}