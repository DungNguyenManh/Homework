#include <stdio.h>
#include <time.h>
#include<math.h>
#include <stdlib.h>

#define Max 100
#define Min -100

int Nhap_Kich_Thuoc_Mang();
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n, int x);

int main()
{
    int a[Max], n = Nhap_Kich_Thuoc_Mang(), x;
    srand((int)time(NULL));
    Nhap_Mang(a, n);
    Xuat_Mang(a, n, x);

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

void Nhap_Mang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = Min + rand() % (Max + 1 - Min);
    }
}

bool Check_Element_Number(int n)
{
    if(n < 2){
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i+=2){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

bool Check_So_Doi_Xung(int n)
{
    int temp = n, sum = 0;
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
    int temp = n, sum = 0;
    while(temp > 0){
        sum = sum * 10 + (temp % 10);
        if(sum == 6 || sum == 8){
            return 1;
        }
        temp /= 10;
    }
    return 0;
}

void Xuat_Mang(int a[], int n, int x)
{
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
    printf("\nCac phan tu la so nguyen to trong mang la: ");
    for (int i = 0; i < n; i++)
    {
        if (Check_Element_Number(a[i]))
        {
            printf("%2d ", a[i]);
        }
    }
    printf("\nCac phan tu la so doi xung trong mang la: ");
    for (int i = 0; i < n; i++)
    {
        if (Check_So_Doi_Xung(a[i]))
        {
            printf("%2d ", a[i]);
        }
    }
    printf("\nCac phan tu la so may man trong mang la: ");
    for (int i = 0; i < n; i++)
    {
        if (Check_So_May_Man(a[i]))
        {
            printf("%2d ", a[i]);
        }
    }
}