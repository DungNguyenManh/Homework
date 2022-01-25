#include <stdio.h>
#include<math.h>

void Nhap_Canh(int &n);
void Hinh_9(int n);
void Hinh_10(int n);
void Hinh_11(int n);
void Hinh_12(int n);
void Hinh_13(int n);
void Hinh_14(int n);
void Hinh_15(int n);
void Hinh_16(int n);

int main()
{
    int n;
    Nhap_Canh(n);
    Hinh_9(n);
    Hinh_10(n);
    Hinh_11(n);
    Hinh_12(n);
    Hinh_13(n);
    Hinh_14(n);
    Hinh_15(n);
    Hinh_16(n);

    return 0;
}

void Nhap_Canh(int &n)
{
    printf("Nhap n: ");
    scanf("%d", &n);
}

void Hinh_9(int n)
{
    printf("Hinh 9: \n\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n * 2 - 1; j++)
        {
            if (j >= n - i + 1 && j <= n + i - 1)
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
    printf("\n\n");
}

void Hinh_10(int n)
{
    printf("Hinh 10: \n\n");
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n * 2 - 1; j++)
        {
            if (j >= n - i + 1 && j <= n + i - 1)
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
    printf("\n\n");
}

void Hinh_11(int n)
{
    printf("Hinh 11: \n\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n * 2 - 1; j++)
        {
            if (i + j == n + 1 || j == n + i - 1 || i == n)
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
    printf("\n\n");
}

void Hinh_12(int n)
{
    printf("Hinh 12: \n\n");
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n * 2 - 1; j++)
        {
            if (i == n || j == n - i + 1 || j == n + i - 1)
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
    printf("\n\n");
}

void Hinh_13(int n)
{
    printf("Hinh 13: \n\n");
    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || j == 1 || i + j == n*2)
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
    printf("\n\n");
}

void Hinh_14(int n)
{
    printf("Hinh 14: \n\n");
    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == n || j == abs(n-i)+1)
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
    printf("\n\n");
}

void Hinh_15(int n)
{
    printf("Hinh 15: \n\n");
    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j && i + j <= n*2)
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
    printf("\n\n");
}

void Hinh_16(int n)
{
    printf("Hinh 16: \n\n");
    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i+j >= n+1 && i + j <= n+i-1)
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
    printf("\n\n");
}