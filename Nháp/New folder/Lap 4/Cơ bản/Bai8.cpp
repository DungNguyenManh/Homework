#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    printf("Bang cuu chuong: \n");
    while (i <= 10)
    {
        printf("%2d * %2d = %2d\n", n, i, n * i);
        i++;
    }

    return 0;
}