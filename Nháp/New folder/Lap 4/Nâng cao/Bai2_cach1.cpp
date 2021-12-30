#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int n;
    printf("nhap so nguyen duong n (n > 0) : ");
    scanf("%d", &n);
    if (n > 0)
    {
        int dem = 0, x = 0;
        while (true)
        {
            x++;
            dem += x;
            if (dem > n)
                break;
            else
            if(dem == 1)
            {
                printf("%d",dem);
            }else{
            printf(" + %d ", x);
            }
        }
        printf(" <= %d", n);
    }
    else
        printf("\nday khong phai la so nguyen duong ! yeu cau nhap lai");
    return 0;
}