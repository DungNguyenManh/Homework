#include <stdio.h>

void Nhap_So(int &a, int &b);
void BSCNN(int a, int b);

int main()
{
    int a, b;
    Nhap_So(a, b);
    BSCNN(a, b);

    return 0;
}

void Nhap_So(int &a, int &b)
{
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
}

void BSCNN(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b; 
        a = b; 
        b = temp;  
    }
    printf("Boi so chung nho nhat la: %d", a);
}