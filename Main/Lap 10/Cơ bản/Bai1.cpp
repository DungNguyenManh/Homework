#include <stdio.h>
#include<math.h>
#define Max 100

void Nhap_Kich_Thuoc_Mang(int &n);
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n);
void Xuat(int n);

int main()
{
    int n, a[Max];
    Nhap_Kich_Thuoc_Mang(n);
    Nhap_Mang(a, n);
    Xuat_Mang(a,n);
    Xuat(n);


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

bool Check_0(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            return 1;
        }
    }
    return 0;
}

bool Check_Am( int n)
{
    if(n < 0){
        return 1;
    }
    return 0;
}

bool Check_Doi_Xung(int n)
{
    int sum = 0;
    int temp = n;
    while(temp > 0){
        sum = sum * 10 + (temp % 10);
        temp /= 10;
    }
    if(sum == n){
        return 1;
    }
    return 0;
}

bool Check_So_May_Man(int n)
{
    while(n > 0)
    {
        int i = n % 10;
        if(!(i == 8 || i == 6)){
            return 0;
        }
        n/=10;
    }
    return 1;
}

bool Check_Chinh_Phuong(int n)
{
    if(sqrt(n) * sqrt(n) == n){
        return 1;
    }
    return 0;
}

bool Check_Hoan_Thien(int n)
{
    int temp = n;
    int sum = 0;
    for(int i = 1; i < temp; i++)
    {   
        if(temp % i == 0){
            sum+=i;
        }
    }
    if(sum == temp){
        return 1;
    }
    return 0;
}

void Xuat(int n)
{
    for(int i = 0; i < n; i++){
        
    }
}