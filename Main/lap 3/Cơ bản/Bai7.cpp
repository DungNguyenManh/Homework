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
    giay -= 1;
    if (gio >= 0 && gio <= 23)
    {
        if (phut >= 0 && phut <= 59)
        {
            if (giay <= 59)
            {
                printf("Ban vua nhap %d:%d:%d", gio, phut, giay);
                if (giay < 0)
                {
                    giay = 59;
                    phut--;
                    if(phut < 0)
                    {
                        phut = 59;
                        gio--;
                        if(gio < 0){
                            gio = 23;
                        }
                    }
                }
                
                printf("\n1 giay truoc la %d:%d:%d", gio, phut, giay);
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