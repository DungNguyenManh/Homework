#include <stdio.h>

int main()
{
    int sotien, to1, to2, to5, to10, to20, sodu;
    printf("Nhap vao so tien: ");
    scanf("%d", &sotien);
    to20 = sotien / 20;
    sodu = sotien % 20;

    to10 = sodu / 10;
    sodu %= 10;

    to5 = sodu / 5;
    sodu %= 5;

    to2 = sodu / 2;
    sodu %= 2;

    to1 = sodu / 1;
    printf("So to tien 20k la: %d\n", to20);
    printf("So to tien 10k la: %d\n", to10);
    printf("So to tien 5k la: %d\n", to5);
    printf("So to tien 2k la: %d\n", to2);
    printf("So to tien 1k la: %d", to1);

    return 0;
}