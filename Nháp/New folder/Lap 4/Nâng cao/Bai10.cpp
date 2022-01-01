#include <stdio.h>

int main()
{
    int n, temp, min, count = 0;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    temp = n;
    min = n % 10;
    if (n >= 0)
    {
        while (temp > 0)
        {
            if (min == temp % 10)
            {
                count++;
            }
            if (temp % 10 < min)
            {
                min = temp % 10;
            }
            temp /= 10;
        }
        printf("Chu so nho nhat trong %d la: %d", n, min);
        printf("\nSo luong chu so %d trong %d la: %d", min, n, count);
    }
    else
    {
        printf("%d khong phai la so nguyen duong", n);
    }

    return 0;
}