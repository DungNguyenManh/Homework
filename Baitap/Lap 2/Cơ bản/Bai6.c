#include <stdio.h>

int main()
{
    int nam;
    do
    {
        printf("Nhap vao nam duong lich: ");
        scanf("%d", &nam);
        if (nam < 0)
        {
            printf("Nhap sai. Moi nhap lai!\n");
        }
    } while (nam < 0);
    if (nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0)
    {
        printf("%d la nam nhuan", nam);
    }
    else
    {
        printf("%d khong phai la nam nhuan", nam);
    }

    return 0;
}