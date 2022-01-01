#include <stdio.h>

int main()
{
    int n, min, temp;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    min = n % 10;
    temp = n;
    if (temp >= 0)
    {
        while (temp > 0)
        {
            if (temp % 10 < min)
            {
                min = temp % 10;
            }
            temp /= 10;
        }
        printf("Chu so nho nhat trong %d la: %d", n, min);
    }
    else
    {
        printf("%d Khong phai la so nguyen duong", n);
    }

    return 0;
}