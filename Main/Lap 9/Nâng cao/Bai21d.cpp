#include <stdio.h>
#define Max 4

void Ve(int a[Max], int n);

int main()
{
    int a[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    Ve(a,n);

    return 0;
}

void Ve(int a[Max], int n)
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + a[j] >= 11)
                printf(" X ");
            else
                printf("   ");
        }
        printf("\n");
    }
}