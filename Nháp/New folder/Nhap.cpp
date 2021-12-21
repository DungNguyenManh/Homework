#include <stdio.h>
#include <math.h>
#define Max 100

void Liet_Ke_So_Chinh_Phuong(int n);

int main()
{
    int n, a[Max];
    printf("Nhap n: ");
    scanf("%d", &n);
    Liet_Ke_So_Chinh_Phuong(n);
}

bool Kiem_Tra_So_Chinh_Phuong(int n)
{
    if (sqrt(n) * sqrt(n) == n)
    {
        return true;
    }
    return false;
}

void Liet_Ke_So_Chinh_Phuong(int n) 
{
    printf("Tong cac so chinh phuong nho hon %d la: ",n);
    int sum = 0;
    for (int i = 4; i < n; i++)
    {
        if(Kiem_Tra_So_Chinh_Phuong(i) == true){
            sum += i;
        }
    }printf("%d",sum);
        
}