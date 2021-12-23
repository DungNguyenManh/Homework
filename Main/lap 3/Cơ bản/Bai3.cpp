#include <stdio.h>

int main()
{
    int m;
    do
    {
        printf("Nhap thang: ");
        scanf("%d", &m);
        if (m < 1 || m > 12)
        {
            printf("Nhap lai \n");
        }
    } while (m < 1 || m > 12);
    switch (m)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Thang %d co 30 ngay", m);
        break;
    case 2:
        printf("Khong tinh nam nhuan thi thang 2 co 28 hoac 29 ngay");
    default:
        printf("Thang %d co 31 ngay", m);
    }

    return 0;
}