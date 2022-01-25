#include <stdio.h>

void Nhap_Canh(int &n);
void Hinh_1(int n);
void Hinh_2(int n);

int main()
{
    int n;
    Nhap_Canh(n);
    Hinh_1(n);
    Hinh_2(n);




    return 0;
}

void Nhap_Canh(int &n)
{
    printf("Nhap n: ");
    scanf("%d", &n);
}

void Hinh_1(int n)
{
    printf("Hinh 1: \n\n");
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

void Hinh_2(int n)
{
    printf("Hinh 2: \n\n");
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

void Hinh_3(int n)
{
    printf("Hinh 3: \n\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n * 2 - 1; j++)
        {
            if (i+j == n + 1 || j == n+i-1 || i == n)
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