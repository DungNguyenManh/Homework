#include <stdio.h>

int main()
{
    int n, sum = 0, max = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap lai\n");
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        if (sum <= n)
        {
            if (i == 1)
            {
                printf("%d ", i);
            }
            else
            {
                printf("+ %d ", i);
            }
        }
    }
    printf("<= %d", n);

    return 0;
}
