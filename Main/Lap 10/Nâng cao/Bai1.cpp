#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Max 100

void NhapXuatMang(int a[], int n);
int KTGtri(int a[], int n);
int TraveSNT(int a[], int n);
int TraveSDX(int a[], int n);

int main()
{
    int n, a[Max];
    srand((unsigned int) time(NULL));
    printf("Nhap n: ");
    scanf("%d", &n);
    NhapXuatMang(a,n);
    printf("\nHam tra ve (co tra ve 1) || (khong co tra ve 0)");
    int trave0 = KTGtri(a,n);
    printf("\nCo gtri 0: %d", trave0);
    int traveElementNumber = TraveSNT(a,n);
    printf("\nCo gtri SNT: %d", traveElementNumber);
    int traveSDX = TraveSDX(a,n);
    printf("\nCo gtri So Doi Xung: %d", traveSDX);

    return 0;
}

void NhapXuatMang(int a[], int n)
{
    int tu = -10, den = 10;
    for(int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
    printf("Mang vua tao la: ");
    for(int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}

int KTGtri(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0)
            return 1;
    }
    return 0;
}

bool CheckElementNumber(int n)
{
    if(n < 2)
        return 0;
    for(int i = 2; i < n; i++){
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int TraveSNT(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(CheckElementNumber(a[i]))
            return 1;
    }
    return 0;
}

bool KT_SoDoiXung(int n)
{
    int temp = n, sum = 0;
    while(temp > 0)
    {
        sum = sum * 10 + (temp % 10);
        temp /= 10;
    }
    if(sum == n)
        return 1;
    else    
        return 0;
}

int TraveSDX(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(KT_SoDoiXung(a[i]))
            return 1;
    }
    return 0;
}