#include <stdio.h>

int main()
{
    int d, m, y;
    printf("Nhap nam: ");
    scanf("%d", &y);
    printf("Nhap thang: ");
    scanf("%d", &m);
    printf("Nhap ngay: ");
    scanf("%d", &d);
    if (y < 0)
    {
        printf("Nam ko hop le");
    }
    else
    {
        if (m == 2)
        {
            if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
            {
                if (d == 29)
                {
                    printf("%d/%d/%d hop le", d, m, y);
                }
                else
                {
                    printf("%d/%d/%d ko hop le", d, m, y);
                }
            }
            else
            {
                if (d == 28)
                {
                    printf("%d/%d/%d hop le", d, m, y);
                }
                else
                {
                    printf("%d/%d/%d ko hop le", d, m, y);
                }
            }
        }
        else
        {
            if (m < 1 || m > 12)
            {
                printf("%d/%d/%d 'thang' ko hop le", d, m, y);
            }
            else
            {
                switch (m)
                {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    if (d >= 0 && d <= 31)
                    {
                        printf("%d/%d/%d hop le", d, m, y);
                    }
                    else
                    {
                        printf("%d/%d/%d 'ngay1' ko hop le", d, m, y);
                    }
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    if (d >= 0 && d <= 30)
                    {
                        printf("%d/%d/%d hop le", d, m, y);
                    }
                    else
                    {
                        printf("%d/%d/%d 'ngay2' ko hop le", d, m, y);
                    }
                    break;
                }
            }
        }
    }

    return 0;
}