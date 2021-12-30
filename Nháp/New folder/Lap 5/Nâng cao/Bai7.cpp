#include <stdio.h>

int Nhap_So(int n);
void Tich(int n);

int main()
{
    int n;
    n = Nhap_So(n);
    Tich(n);

    return 0;
}

int Nhap_So(int n)
{
    printf("Nhap n: ");
    scanf("%d",&n);
    return n;
}

void Tich(int n)
{
    int T = 1;
    for(int i = 1; i <= n; i++){
        T *= (2*i-1);
    }
    printf("Tich cac so tu 1 den %d la: %d",2*n-1,T);
}