#include <stdio.h>
#define Max 100
bool Check_ElementNumber(int n);
void check();
int main()
{
    int k;
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

void check(){
    int k;
    for (int i = 4; i <= Max; i++)
    {
        for (int j = i - 1; j > 0; j--)
        {
            if (Check_ElementNumber(j))
            {
                k = i - j;
                if (Check_ElementNumber(k))
                {
                    printf("%2d = %2d + %2d\n", i, j, k);
                }
            }
        }
    }


}