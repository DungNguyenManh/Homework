#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    if (n > 0 && n <= 45)
    {
        printf("Vong 1");
    }
    else if (n > 45 && n <= 90)
    {
        printf("Vong 2");
    }
    else if (n > 90 && n <= 180)
    {
        printf("Vong 3");
    }
    else
    {
        printf("Vong 4");
    }

    return 0;
}