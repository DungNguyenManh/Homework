#include <stdio.h>
#include <math.h>

int main()
{
    int n, a, b, c;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    a = n / 100;
    b = n % 100 / 10;
    c = n % 10;
    if (a > b && a > c)
    {
        printf("So lon nhat la: %d", a);
    }
    else if (b > a && b > c)
    {
        printf("So lon nhat la: %d", b);
    }
    else
    {
        printf("So lon nhat la: %d", c);
    }

    return 0;
}