#include <stdio.h>

int main()
{
    int h, p, s;
    printf("Nhap gio: ");
    scanf("%d", &h);
    printf("Nhap phut: ");
    scanf("%d", &p);
    printf("Nhap giay: ");
    scanf("%d", &s);
    s++;
    if (s >= 60)
    {
        s = 0;
        p++;
        if (p >= 60)
        {
            p = 0;
            h++;
            if (h >= 24)
            {
                h = 0;
                printf("%d:%d:%d", h, p, s);
            }
            else
            {
                printf("a");
            }
        }
        else
        {
            printf("b");
        }
    }
    else
    {
        printf("c");
    }

    return 0;
}