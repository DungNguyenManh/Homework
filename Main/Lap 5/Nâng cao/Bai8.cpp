#include <stdio.h>

int Nhap_So(int k);
int Nhap_So_Mu(int n);
void Tich(int k, int n);

int main()
{
    int k, n;
    k = Nhap_So(k);
    n = Nhap_So_Mu(n);
    Tich(k, n);

    return 0;
}

int Nhap_So(int k)
{
    printf("Nhap k: ");
    scanf("%d", &k);
    return k;
}

int Nhap_So_Mu(int n)
{
    printf("Nhap so mu: ");
    scanf("%d", &n);
    return n;
}

void Tich(int k, int n)
{
    int T = 1;
    for (int i = 1; i <= n; i++)
    {
        T *= k;
    }
    printf("%d^%d = %d", k, n, T);
}