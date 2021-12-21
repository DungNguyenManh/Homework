#include <stdio.h>

void Hinha(int n);
void Hinhb(int n);
void Hinhc(int n);
void Hinhd(int n);

int main()
{
    int n;
    printf("Nhap canh n: ");
    scanf("%d", &n);
    Hinha(n);
    Hinhb(n);
    Hinhc(n);
    Hinhd(n);

    return 0;
}

void Hinha(int n)
{
    printf("Hinh A\n");
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n - i + 1; j++)
        {
            printf("   ");
        }
        for (int j = 1; j <= n * 2 - 1; j++)
        {
            if (j == 1 || j <= 2 * i - 1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void Hinhb(int n)
{
    printf("Hinh B\n");
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n");
}

void Hinhc(int n)
{
    printf("Hinh C\n");
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n - i + 1; j++)
        {
            printf("   ");
        }
        for (int j = 1; j <= n * 2 - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1 || i == n)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void Hinhd(int n)
{
    printf("Hinh D\n");
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1; j++)
        {
            if (j == 1 || j == n + 1 || i == 1 || i == n)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");
}