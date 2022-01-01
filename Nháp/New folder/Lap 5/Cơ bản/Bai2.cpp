#include <stdio.h>

int Nhap_So(int n);
void Reverse_Number(int n);

int main()
{
    int n;
    n = Nhap_So(n);
    Reverse_Number(n);

    return 0;
}

int Nhap_So(int n)
{
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    return n;
}

void Reverse_Number(int n)
{
    int temp = n;
    int sum = 0;
    while (n > 0) 
    {
        sum = sum * 10 + (n % 10); 
        n /= 10;
    }
    printf("So dao nguoc cua %d la: %d", temp, sum);
}