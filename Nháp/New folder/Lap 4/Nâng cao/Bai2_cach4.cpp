#include <stdio.h>
#pragma warning(disable : 4996)
int main()

{
    int n;
    printf("nhap so nguyen duong n (n > 0) : ");
    scanf("%d", &n);
    int dem = 0, x = 1;
    if (n > 0)
    {
        while (true)
        {
            printf("%d ", x);
            x++;
            dem += x;
            if (dem < n)
                printf("+ ");
            else
                break;
        }
        printf(" <= %d", n);
    }
    else
        printf("\nday khong phai la so nguyen duong ! yeu cau nhap lai");
    return 0;
}