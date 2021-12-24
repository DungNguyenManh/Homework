#include <stdio.h>

int main()
{
    int n, m;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap m: ");
    scanf("%d", &m);
    for (n; n < m; n++)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%2d * %2d = %2d\n", n, i, n * i);
        }
        printf("\n");
    }

    return 0;
}