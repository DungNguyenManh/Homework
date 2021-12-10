#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);
    if (sqrt(n) * sqrt(n) == n)
    {
        printf("%d la so chinh phuong ", n);
    }
    else
    {
        printf("%d khong phai la so chinh phuong", n);
    }

    return 0;
}