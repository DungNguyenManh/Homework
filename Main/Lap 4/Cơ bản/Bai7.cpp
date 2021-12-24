#include <stdio.h>

int main()
{
    int a, n, cb;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap cong boi: ");
    scanf("%d", &cb);
    while (a < n)
    {
        printf("%2d ", a);
        a *= cb;
    }

    return 0;
}