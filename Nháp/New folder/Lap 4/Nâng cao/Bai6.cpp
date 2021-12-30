#include <stdio.h>

int main()
{
    int n, sumsole = 0, sumsochan = 0, tsole = 1, tsochan = 1;
    printf("Nhap n: ");
    scanf("%d", &n);
    int temp = n;
    while (temp > 0)
    {
        if ((temp % 10) % 2 == 0)
        {
            sumsochan += temp % 10;
            tsochan *= temp % 10;
        }
        else
        {
            sumsole += temp % 10;
            tsole *= temp % 10;
        }
        temp /= 10;
    }
    printf("Tong so chan trong %d la: %d", n, sumsochan);
    printf("\nTich so chan trong %d la: %d", n, tsochan);
    printf("\nTong so le trong %d la: %d", n, sumsole);
    printf("\nTich so le trong %d la: %d", n, tsole);

    return 0;
}