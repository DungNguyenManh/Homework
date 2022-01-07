#include <stdio.h>

int Nhap_So(char c);
void BSCNN(int a, int b);

int main()
{
    int a = Nhap_So('a');
    int b = Nhap_So('b');
    BSCNN(a,b);

    return 0;
}

int Nhap_So(char c)
{
    int k;
    printf("Nhap so nguyen duong %c: ", c);
    scanf("%d", &k);

    return k;
}

void BSCNN(int a, int b)
{   int temp1=a, temp2 = b;
    int tich = a*b;
    while(temp1!=temp2){
        if(temp1 > temp2){
            temp1-=temp2;
        }else{
            temp2-=temp1;
        }
    }
    printf("Boi so chung nho nhat cua %d va %d la: %d",a,b,tich/temp2);
}