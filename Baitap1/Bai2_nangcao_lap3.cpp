#include <math.h>
#include <stdio.h>
int main()
{
    int ngay, thang, nam, songay;
    printf("nhap ngay:");
    scanf("%d", &ngay);
    printf("nhap thang:");
    scanf("%d", &thang);
    printf("nhap nam:");
    scanf("%d", &nam);
    ngay = ngay - 1;
    if (ngay <= 0)
    {
        thang = thang - 1;
        if (thang <= 0)
        {
            thang = 12;
            nam -= 1;
        }
        switch (thang)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            songay = 31;
            break;
        case 2:
            songay = 28 + ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0));
            break;
        default:
            songay = 30;
        }
        ngay = songay;
    }
    printf("%d/%d/%d", ngay, thang, nam);
    return 0;
}