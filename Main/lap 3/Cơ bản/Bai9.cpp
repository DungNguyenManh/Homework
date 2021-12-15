#include <stdio.h>

int main()
{
    int day, month, year;
    do
    {
        printf("Nhap vao ngay: ");
        scanf("%d", &day);
        if (day <= 0)
        {
            printf("Khong hop le. Nhap lai! \n");
        }
    } while (day <= 0);
    do
    {
        printf("Nhap vao thang: ");
        scanf("%d", &month);
        if (month <= 0)
        {
            printf("Khong hop le. Nhap lai! \n");
        }
    } while (month <= 0);
    do
    {
        printf("Nhap vao nam: ");
        scanf("%d", &year);
        if (year <= 0)
        {
            printf("Ko hop le. Nhap lai! \n");
        }
    } while (year <= 0);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if (day > 0 && day <= 31)
        {
            printf("%d/%d/%d", day, month, year);
        }
        else
        {
            printf("Khong hop le! ");
        }
    }
    else
    {
        if (month == 9 || month == 4 || month == 6 || month == 11)
        {
            if (day > 0 && day <= 30)
            {
                printf("%d/%d/%d", day, month, year);
            }
            else
            {
                printf("Khong hop le! ");
            }
        }
        if (month == 2)
        {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            {
                if (day > 0 && day <= 29)
                {
                    printf("%d/%d/%d", day, month, year);
                }
                else
                {
                    printf("Khong hop le! ");
                }
            }
            else
            {
                if (day > 0 && day <= 28)
                {
                    printf("%d/%d/%d", day, month, year);
                }
                else
                {
                    printf("Khong hop le! ");
                }
            }
        }
    }

    return 0;
}