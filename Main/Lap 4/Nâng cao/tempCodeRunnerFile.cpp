#include <stdio.h>
#include <math.h>

int main()
{
    int n, variable;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Cac so < %d co dang 2^k la: ", n);
    for (int k = 0; k <= n / 2; k++)
    {
        variable = pow(2, k);
        if (variable < n)
        {
            printf("2^%d ", k);
        }
    }

    return 0;
}