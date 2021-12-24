#include <stdio.h>

int main()
{
    int n, sum = 0, t = 1;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if (!(100 <= n && n <= 999))
        {
            printf("Moi nhap lai\n");
        }
    } while (!(100 <= n && n <= 999));
    while (n > 0)
    {
        sum += (n % 10);
        t *= (n % 10);
        n /= 10;
    }
    printf("Tong = %d\nTich = %d", sum, t);

    return 0;
}