#include <stdio.h>

int Nhap_So_n(int n);
void Dem_So_Luong_Chu_So_Nho_Nhat(int n);

int main()
{
    int n;
    n = Nhap_So_n(n);
    Dem_So_Luong_Chu_So_Nho_Nhat(n);
}

int Nhap_So_n(int n)
{
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    return n;
}

void Dem_So_Luong_Chu_So_Nho_Nhat(int n)
{
    int temp = n;
    int min = n % 10;
    int count = 0;
    int i;
    if (n == 0)
    {
        count == 1;
    }
    while (n > 0)
    {
        i = n % 10;
        if (i == min)
        {
            count++;
        }
        if (i < min)
        {
            min = i;
        }
        n /= 10;
    }
    printf("Chu so nho nhat trong %d la: %d\n", temp, min);
    printf("So luong chu so %d trong %d la: %d", min, temp, count);
}