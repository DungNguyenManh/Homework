#include <stdio.h>

int main()
{
    int gio, phut, giay;
    printf("Nhap gio: ");
    scanf("%d", &gio);
    printf("Nhap phut: ");
    scanf("%d", &phut);
    printf("Nhap giay: ");
    scanf("%d", &giay);
    if (gio >= 0 && gio <= 23)
    {
        if (phut >= 0 && phut <= 59)
        {
            if (giay <= 59)
            {
                printf("Ban vua nhap %d:%d:%d", gio, phut, giay);
                if (giay + 1 > 60)
                {
                    //
                }
                else
                {
                    if (giay + 1 == 60)
                    {
                        phut += 1;
                        giay = 0;
                        if (phut == 60)
                        {
                            phut = 0;
                            gio += 1;
                            if (gio == 24)
                            {
                                gio = 0;
                                giay = 0;
                                phut = 0;
                            }
                        }
                    }
                }
                printf("\n1 giay sau la %d:%d:%d", gio, phut, giay);
            }
            else
            {
                printf("giay ko dung");
            }
        }
        else
        {
            printf("phut ko dung");
        }
    }
    else
    {
        printf("gio ko dung");
    }

    return 0;
}


