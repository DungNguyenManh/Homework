#include <stdio.h>
#include <math.h>

int main()
{
    float n, sum = 0, x, a, b = 0;
    printf("Nhap x: ");
    scanf("%f", &x);
    printf("Nhap n: ");
    scanf("%f", &n);
    for (float i = 1; i <= n; i++)
    {
        a = pow(x, i);
        b += i;
        sum += a / b;
    }
    printf("%.2f", sum);

    return 0;
}