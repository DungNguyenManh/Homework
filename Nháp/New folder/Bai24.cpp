#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    printf("Cac uoc so le cua %d la: ", n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0 && i % 2 == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}