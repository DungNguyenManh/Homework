#include <stdio.h>

int main()
{
    for (int i = 2; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%2d * %2d = %2d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}