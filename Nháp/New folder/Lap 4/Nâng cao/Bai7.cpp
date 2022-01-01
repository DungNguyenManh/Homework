#include <stdio.h>

int main()
{
    int n, max = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    int temp = n;
    while (temp > 0)
    {

        if (temp % 10 > max)
        {
            max = (temp % 10);
        }
        temp /= 10;
    }
    printf("Chu so lon nhat trong %d la: %d", n, max);
}