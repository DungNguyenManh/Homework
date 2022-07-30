#include<stdio.h>

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        for(int j = 2; j <= 5; j++)
        {
            printf("%2d  x %2d = %2d  ", j, i, j * i);
        }
        printf("\n");
    }

    printf("\n\n");
    
    for(int i = 1; i <= 10; i++)
    {
        for(int j = 6; j <= 9; j++)
        {
            printf("%2d  x %2d = %2d  ", j, i, j * i);
        }
        printf("\n");
    }

    return 0;
}