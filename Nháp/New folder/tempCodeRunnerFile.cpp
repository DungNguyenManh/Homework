#include <stdio.h>

int main()
{
    int n, T = 1;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    printf("Cac uoc so cua %d la: ", n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            T *= i;
            printf("%d ", i);
        }
    }
    printf("\nTich cac uoc so cua %d la: %d", n, T);

    return 0;
}