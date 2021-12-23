#include <stdio.h>

int Nhap_So(char c);
void Kiem_Tra(int n);

int main()
{
    int n;
    n = Nhap_So('n');
    printf("Cac so nho hon %d la: ", n);
    Kiem_Tra(n);
}

int Nhap_So(char c)
{
    int n;
    printf("Nhap so nguyen duong %c: ", c);
    scanf("%d", &n);
    return n;
}

void Kiem_Tra(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (n > i)
        {
            printf("%2d ", i);
        }
    }
}