#include<stdio.h>

int main()
{
    int a, b, UCLL, tempa, tempb, suma = 0, sumb = 0;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    tempa = a;
    tempb = b;

    if(tempa > tempb)
        tempa -= tempb;
    else
        tempa -= tempa;
    UCLL = tempb;
    printf("UCLL cua %d va %d la: %d", a, b, UCLL);

    while(a > 0)
    {
        suma += a % 10;
        a /= 10;
    }

    while(b > 0)
    {
        sumb += b % 10;
        b /= 10;
    }
    if(suma > sumb)
        printf("\nTong cac so hang trong tung so a lon hon");
    else
        printf("\nTong cac so hang trong tung so b lon hon");
        

    return 0;
}