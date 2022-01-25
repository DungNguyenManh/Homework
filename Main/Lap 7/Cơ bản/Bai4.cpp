#include <stdio.h>

int Nhap_So(int n);
void Hinh1(int n);
void Hinh2(int n);
void Hinh3(int n);
void Hinh4(int n);
void Hinh5(int n);
void Hinh6(int n);
void Hinh7(int n);
void Hinh8(int n);

int main()
{
    int n = Nhap_So(n);
    Hinh1(n);
    Hinh2(n);
    Hinh3(n);
    Hinh4(n);
    Hinh5(n);
    Hinh6(n);
    Hinh7(n);
    Hinh8(n);

    return 0;
}

int Nhap_So(int n)
{
    printf("Nhap canh n: ");
    scanf("%d", &n);

    return n;
}

void Hinh1(int n)
{
    printf("\nHinh 1: \n\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j <= n + 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void Hinh2(int n)
{
    printf("\nHinh 2: \n\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j >= n + 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void Hinh3(int n)
{
    printf("\nHinh 3: \n\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i + j == n + 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void Hinh4(int n)
{
    printf("\nHinh 4: \n\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 5 || j == 5 || i + j == n + 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void Hinh5(int n)
{
    printf("\nHinh 5: \n\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void Hinh6(int n)
{
    printf("\nHinh 6: \n\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i <= j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void Hinh7(int n)
{
    printf("\nHinh 7: \n\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || i == 5 || i == j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void Hinh8(int n)
{
    printf("\nHinh 8: \n\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 5 || i == j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}