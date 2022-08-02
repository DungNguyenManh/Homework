#include <stdio.h>
#include <math.h>

void Hinh8(int n);

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    Hinh8(n);

    return 0;
}

void Hinh1(int n)
{
    printf("\nHinh 1\n");
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf("   ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n\n");
}

void Hinh2(int n)
{
    printf("\nHinh 2\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= i && j <= 2 * n - i)
                printf(" * ");
            else
                printf("   ");
        }

        printf("\n");
    }
    printf("\n\n");
}

void Hinh3(int n)
{
    printf("\nHinh 3\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (i + j == n + 1 || i == n || j == n + i - 1)
                printf(" * ");
            else
                printf("   ");
        }

        printf("\n");
    }
    printf("\n\n");
}

void Hinh4(int n)
{
    printf("\nHinh 4\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (i == 1 || i == j || i + j == 2 * n)
                printf(" * ");
            else
                printf("   ");
        }

        printf("\n");
    }
    printf("\n\n");
}

void Hinh5(int n)
{
    printf("\nHinh 5\n");
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == n || i == j || i + j == 2 * n)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }
    printf("\n\n");
}

void Hinh6(int n)
{
    printf("\nHinh 6\n");
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == n || j + i == n + 1 || j == abs(n - i) + 1)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }
    printf("\n\n");
}

void Hinh7(int n)
{
    printf("\nHinh 7\n");
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j && i + j <= 2 * n)
                printf("* ");
        }

        printf("\n");
    }
    printf("\n\n");
}

void Hinh8(int n)
{
    printf("\nHinh 8\n");
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int k = 1; k <= abs(n - i); k++)
        {
            printf("  ");
        }
        for (int j = 1; j <= n; j++)
        {
            if (j >= abs(n - i) + 1)
                printf("* ");
        }

        printf("\n");
    }
    printf("\n\n");
}