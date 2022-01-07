#include <stdio.h>

int Nhap_So(char c);
void BSCNN(int n, int m);

int main()
{
    int n = Nhap_So('n');
    int m = Nhap_So('m');
    BSCNN(n, m);

    return 0;
}

int Nhap_So(char c)
{
    int k;
    printf("Nhap so nguyen duong %c: ", c);
    scanf("%d", &k);

    return k;
}

void BSCNN(int n, int m)
{
    printf("Boi so cua %d nho hon %d la: ", n, m);
    for (int i = 0; i < m; i += n)
    {
        printf("%2d ", i);
    }
}