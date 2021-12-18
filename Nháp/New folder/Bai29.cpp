#include <stdio.h>

int main()
{
    int n, max = 0;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    for (int i = n / 2; i > 1; i--)
    {
        if (n % i == 0 && i % 2 != 0)
        {
            max = i;
            break;
        }
    }
    printf("Uoc so le lon nhat cua %d la: %d", n, max);

    return 0;
}