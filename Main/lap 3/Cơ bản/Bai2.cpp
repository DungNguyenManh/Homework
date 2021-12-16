#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    if (n >= 0 && n <= 9)
    {
        switch (n)
        {
        case 0:printf("Khong");break;
        case 1:printf("mot");break;
        case 2:printf("hai");break;
        case 3:printf("ba");break;
        case 4:printf("bon");break;
        case 5:printf("nam");break;
        case 6:printf("sau");break;
        case 7:printf("bay");break;
        case 8:printf("tam");break;
        

        default:printf("chin");
        }
    }else{
        printf("Ko hop le");
    }

    return 0;
}