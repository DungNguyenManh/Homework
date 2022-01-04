#include <stdio.h>

int Nhap_So(char c);
void Uoc_So(int n, int m);

int main()
{
    int n = Nhap_So('n');
    int m = Nhap_So('m');
    Uoc_So(n, m);

    return 0;
}

int Nhap_So(char c)
{
    int n;
    printf("Nhap so nguyen duong %c: ", c);
    scanf("%d", &n);
    return n;
}

void Uoc_So(int n, int m)
{
    printf("Cac uoc so cua %d nho hon %d la: ", n, m);
    for (int i = 1; i < m; i++)
    {
        if (n % i == 0)
        {
            printf("%2d ", i);
        }
    }
}