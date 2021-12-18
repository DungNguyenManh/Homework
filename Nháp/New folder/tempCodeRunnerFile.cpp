#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    printf("Cac uoc so chan cua %d la: ", n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0 && i % 2 == 0)
        {
            sum += i;
            printf("%d ", i);
        }
    }
    printf("Tong cac uoc so chan cua %d la: %d", n, sum);

    return 0;
}