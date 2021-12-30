#include <stdio.h>

int main()
{
    int gio1, phut1, giay1, gio2, phut2, giay2;
    printf("TG thu 1 la: ");
    printf("\nGio 1 la: ");
    scanf("%d", &gio1);
    printf("Phut 1 la: ");
    scanf("%d", &phut1);
    printf("giay 1 la: ");
    scanf("%d", &giay1);
    printf("\nTG thu 2 la: ");
    printf("\nGio 2 la: ");
    scanf("%d", &gio2);
    printf("Phut 2 la: ");
    scanf("%d", &phut2);
    printf("giay 2 la: ");
    scanf("%d", &giay2);
    int tong_giay = (giay1+phut1*60+gio1*3600) + (giay2+phut2*60+gio2*3600);
    int gio,phut,giay;
    gio = tong_giay / 3600;
    phut = tong_giay % 3600 / 60;
    giay = tong_giay - gio*3600 - phut*60;
    printf("%d:%d:%d",gio,phut,giay);


    return 0;
}