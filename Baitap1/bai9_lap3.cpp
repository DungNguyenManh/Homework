#include <stdio.h>
 
int main()
{
    int day, month, year;
    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if (day > 0 && day <= 31)
        {
            printf("%d/%d/%d", day, month, year);
        }
        else
        {
            printf("Ko hop le");
        }
    }
    else if (month == 6 || month == 4 || month == 9 || month == 11)
    {
        if (day > 0 && day <= 30)
        {
            printf("%d/%d/%d", day, month, year);
        }
        else
        {
            printf("Ko hop le");
        }
    }
    else if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            if (day > 0 && day <= 29)
            {
                printf("%d/%d/%d", day, month, year);
            }
            else
            {
                printf("Ko hop le");
            }
        }
        else if (day > 0 && day <= 28)
        {
            printf("%d/%d/%d", day, month, year);
        }
        else
        {
            printf("Ko hop le");
        }
    }
 
    return 0;
}