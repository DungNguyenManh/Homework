#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum = 0, x;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        sum += pow(x, 2 * i + 1);
    }
    printf("%d", sum);

    return 0;
}