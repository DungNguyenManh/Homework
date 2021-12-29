#include <stdio.h>

int Nhap_So_n(int n);
void Tim_So_Nho_Nhat(int n);

int main()
{
    int n;
    n = Nhap_So_n(n);
    Tim_So_Nho_Nhat(n);

    return 0;
}

int Nhap_So_n(int n)
{
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    return n;
}

void Tim_So_Nho_Nhat(int n)
{
    int temp = n;
    int i;
    int min = n % 10;
    if (n == 0)
    {
        min = 0;
    }
    while (n > 0)
    {
        i = n % 10;
        if (i < min)
        {
            min = i;
        }
        n /= 10;
    }
    printf("Chu so nho nhat trong %d la: %d", temp, min);
}