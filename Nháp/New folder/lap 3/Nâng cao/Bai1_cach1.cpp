#include <stdio.h>

int main()
{
    int day, month, year, songay_trongthang;
    do
    {
        printf("Nhap ngay: ");
        scanf("%d", &day);
        if (day <= 0)
        {
            printf("Khong hop le. Nhap lai! \n");
        }
    } while (day <= 0);
    do
    {
        printf("Nhap thang: ");
        scanf("%d", &month);
        if (month <= 0)
        {
            printf("Khong hop le. Nhap lai! \n");
        }
    } while (month <= 0);
    do
    {
        printf("Nhap nam: ");
        scanf("%d", &year);
        if (year <= 0)
        {
            printf("Khong hop le. Nhap lai! \n");
        }
    } while (year <= 0);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        songay_trongthang = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        songay_trongthang = 30;
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            songay_trongthang = 29;
            break;
        }
        else
        {
            songay_trongthang = 28;
            break;
        }
    default:
        break;
    }
    day += 1;
    if (day > songay_trongthang)
    {
        day = 1;
        month += 1;
        if (month > 12)
        {
            month = 1;
            year += 1;
        }
    }
    printf("Sau 1 ngay vua nhap: %d/%d/%d", day, month, year);

    return 0;
}