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
    int temp1 = a, temp2 = b;
    while (temp1 != temp2)
    {
        if (temp1 > temp2)
        {
            temp1 -= temp2;
        }
        else
        {
            temp2 -= temp1;
        }
    }
    printf("Uoc so chung lon nhat cua %d va %d la: %d", a, b, temp1);
}