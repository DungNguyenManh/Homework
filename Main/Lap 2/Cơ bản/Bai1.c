#include <stdio.h>

int main() 
{
    int a;
    printf("Nhap vao so nguyen a: ");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("%d la so am!\n", a);
    }
    else
    {
        printf("%d la so duong!\n", a);
    }
    
    if (a % 2 == 0)
    {
        printf("%d la so chan!\n", a);
    }
    else
    {
        printf("%d la so le!\n", a);
    }

    return 0;
}