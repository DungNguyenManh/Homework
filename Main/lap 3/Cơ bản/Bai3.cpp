#include <stdio.h>

int main()
{
    int d, m;
    printf("Nhap thang: ");
    scanf("%d", &m);
    if (m >= 1 && m <= 12)
    {
        switch (m)
        {
        case 4:
        case 6:
        case 9:
        case 11:
            d = 30;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            d = 31;
            break;
        default:
            d = 28;
        }
        if (d == 28)
        {
            printf("Ko tinh nam nhuan thang 2 co 28 hoac 29 ngay");
        }
        else
        {
            printf("Ko tinh nam nhuan, %d co %d", m, d);
        }
    }
    else
    {
        printf("Thang ko hop le");
    }

    return 0;
}