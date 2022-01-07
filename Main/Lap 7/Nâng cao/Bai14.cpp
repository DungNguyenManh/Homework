#include <stdio.h>
#define Max 100
void check();
int main()
{
    check();
    return 0;
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

void check()
{
    int z;
    for (int i = 4; i <= Max; i++)
    {
        for (int j = i - 1; j > 0; j--)
        {
            if (Check_ElementNumber(j))
            {
                z = i - j;
                if (Check_ElementNumber(z))
                {
                    printf("%2d = %2d + %2d\n", i, j, z);
                }
            }
        }
    }
}