#include<stdio.h>
#include<math.h>

int main()
{
    int n, trituyetdoi, canbac2;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    trituyetdoi = abs(n);
    canbac2 = sqrt(n);
    printf("Tri tuyet doi cua %d la: %d", n, trituyetdoi);
    printf("\nCan bac  cua %d la: %d", n, canbac2);

    return 0;
}