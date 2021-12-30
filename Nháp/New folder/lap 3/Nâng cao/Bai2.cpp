#include <stdio.h>

int main()
{
    int day, month, year, songay_trongthang;
    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap year: ");
    scanf("%d", &year);
    day -= 1;
    if (day <= 0)
    {
        month -= 1;
        if (month <= 0)
        {
            month = 12;
            year -= 1;
        }
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            day = 31;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || year & 400 == 0)
            {
                day = 29;
                break;
            }
            else
            {
                day = 28;
                break;
            }
        default:
            day = 30;
        }
        songay_trongthang = day;
    }
    printf("Truoc 1 ngay vua nhap la: %d/%d/%d", day, month, year);

    return 0;
}