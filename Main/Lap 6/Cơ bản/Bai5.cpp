#include <stdio.h>

int Nhap_So(int n);
void Uoc_So(int n);

int main()
{
    int n = Nhap_So(n);
    Uoc_So(n);

    return 0;
}

int Nhap_So(int n)
{
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    return n;
}

void Uoc_So(int n)
{
    int max;
    for (int i = n/2; i >= 1; i--)
    {
        if (n % i == 0 && i % 2 != 0)
        {
            max = i;
            break;
        }
    }
    printf("Uoc so le lon nhat cua %d la: %d",n,max);

}