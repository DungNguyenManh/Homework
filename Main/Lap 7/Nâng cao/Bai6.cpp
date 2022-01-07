#include <stdio.h>

int Nhap_So(int n);
void Liet_Ke(int n);

int main()
{
    int n = Nhap_So(n); 
    Liet_Ke(n);

    return 0;
}

int Nhap_So(int n)
{
    printf("Nhap so nguyen duong n: ");
    scanf("%d",&n);

    return n;
}

bool ElementNumber(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void Liet_Ke(int n)
{
    printf("Uoc so cua %d va la so nguyen to: ",n);
    for (int i = 2; i < n; i++)
    {

        if (ElementNumber(i) && n % i == 0)
        {
            printf("%2d ", i);
        }
    }
}