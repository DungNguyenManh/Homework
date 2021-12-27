#include <stdio.h>
bool ElementNumber(int n);

int main()
{
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {

        if (ElementNumber(i) && n % i == 0)
        {
            printf("%2d ", i);
        }
    }
}

bool ElementNumber(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}