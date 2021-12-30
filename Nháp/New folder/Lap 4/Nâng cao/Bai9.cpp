#include <stdio.h>

int Nhap_So_n(int n);
void Dem_So_Luong_Chu_So_Max(int n);

int main()
{
    int n;
    n = Nhap_So_n(n);
    Dem_So_Luong_Chu_So_Max(n);

    return 0;
}

int Nhap_So_n(int n)
{
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    return n;
}

void Dem_So_Luong_Chu_So_Max(int n)
{
    int max = 1;
    int count = 1;
    int i;
    int temp = n;
    if (n == 0)
    {
        count == 1;
    }
    while (n > 0)
    {
        i = n % 10;
        if (i == max)
        {
            count++;
        }
        if (i > max)
        {
            max = i;
        }

        n /= 10;
    }
    printf("Chu so lon nhat trong %d la: %d\n", temp, max);
    printf("So luong chu so %d trong %d la: %d", max, temp, count);
}