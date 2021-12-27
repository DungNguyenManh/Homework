#include <stdio.h>
#define Max 100
bool Check_ElementNumber(int n);

int main()
{
    int n, k;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    for (int i = 4; i <= 100; i++)
    {
        for (int j = i - 2; j > 0; j--)
        {
            if (Check_ElementNumber(j))
            {
                k = i - j;
                if (Check_ElementNumber(k))
                {
                    printf("%d = %d + %d\n", i, j, k);
                }
            }
        }
    }
}

bool Check_ElementNumber(int n)
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