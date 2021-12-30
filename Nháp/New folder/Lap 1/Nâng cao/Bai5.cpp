#include <stdio.h>

int main()
{
    int a ;
    do
    {
        printf("Nhap vao so nguyen a: ");
        scanf("%d", &a);
        if (a < 0 && a > 9)
        {
            printf("Nhap sai. Moi nhap lai! \n");
        }
    } while (a < 0 && a > 9);
    printf("%d + %d + %d = %d ", a, a * 11, a * 111, a * 123);

    return 0;
}