#include <stdio.h>

int main()
{
    int n, sum = 0, max = 0;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("Nhap lai\n");
        }
    } while (n < 0);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        if (sum <= n)
        {
            if (i >= max)
            {
                max = i;
            }
        }
    }
    for (int i = 1; i <= max; i++)
    {
        if (i == 1)
        {
            printf("%d", i);
        }
        else
        {
            printf(" + %d", i);
        }
    }
    printf(" <= %d", n);

    return 0;
}