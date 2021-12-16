#include <stdio.h>

int main()
{
    int a ;
    printf("Nhap so nguyen: ");
    scanf("%d", &a);
    switch(a){
        case 0:
            printf("So %d la so 0", a);
            break;

        default:
            if(a > 0)
                printf("So %d la so duong", a);
            else
                printf("So %d la so am", a);
    }

    return 0;
}