#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    printf("Cac uoc so chan cua %d la: ", n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0 && i % 2 == 0)
        {
            count++;
            printf("%d ", i);
        }
    }
    printf("\nSo nguyen duong %d co '%d' uoc so chan", n, count);

    return 0;
}