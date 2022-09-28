#include <stdio.h>

int main()
{
    int n, a[100], flag = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            flag++;
    }

    if (flag != 0)
        printf("Mang toan chan");
    else if (flag == 0)
        printf("Mang toan le");

    return 0;
}