#include <stdio.h>
int main()
{
    int to1, to2, to5, to10, to20, sotien;
    printf("Nhap vao so tien: ");
    scanf("%d", &sotien);
    to20 = sotien / 20;
    sotien %= 20;

    to10 = sotien / 10;
    sotien %= 10;

    to5 = sotien / 5;
    sotien %= 5;

    to2 = sotien / 2;
    sotien %= 2;
    
    to1 = sotien / 1;
    sotien %= 1;
    printf("so tien 1 dong la: %d", to1);
    printf("\nso tien 2 dong la: %d", to2);
    printf("\nso tien 5 dong la: %d", to5);
    printf("\nso tien 10 dong la: %d", to10);
    printf("\nso tien 20 dong la: %d", to20);

    return 0;
}