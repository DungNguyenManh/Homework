#include <stdio.h>

int main()
{
    int n, temp, max = 0, count = 0;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    temp = n;
    if (n >= 0)
    {
        while (temp > 0)
        {
            if (temp % 10 > max)
            {
                max = temp % 10;
            }
            if (max == temp % 10)
            {
                count++;
            }

            temp /= 10;
        }
        printf("Chu so lon nhat trong %d la: %d", n, max);
        printf("\nSo luong chu so %d trong %d la: %d", max, n, count);
    }
    else
    {
        printf("%d khong phai la so nguyen duong", n);
    }

    return 0;
}