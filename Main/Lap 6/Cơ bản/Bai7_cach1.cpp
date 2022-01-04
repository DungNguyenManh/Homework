#include <stdio.h>

int Nhap_So(char c);
void Uoc_So(int a, int b);

int main()
{
    int a = Nhap_So('a');
    int b = Nhap_So('b');
    Uoc_So(a, b);

    return 0;
}

int Nhap_So(char c)
{
    int n;
    printf("Nhap so nguyen duong %c: ", c);
    scanf("%d", &n);
    return n;
}

void Uoc_So(int a, int b)
{
    int max = a;
    if (max <= b)
    {
        max = b;
    }
    else
    {
        max = a;
    }
    printf("Uoc so chung lon nhat cua %d va %d la: ", a, b);
    for (int i = max; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            printf("%d", i);
            break;
        }
    }
}