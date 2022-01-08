#include <stdio.h>

int Nhap_So();
void Element_Number_Max(int n);

int main()
{
    int n = Nhap_So();
    Element_Number_Max(n);


    return 0;
}

int Nhap_So()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    return n;
}

bool Check(int k)
{
    if (k < 2)
        return 0;
    for (int i = 2; i < k; i++)
    {
        if (k % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void Element_Number_Max(int n)
{
    int max = 0;
    for (int i = n; i <= 2 * n; i++)
    {
        if (Check(i) && i > max)
        {
            max = i;
        }
    }
    printf("Mid %d va %d co so nguyen to lon nhat la: %d", n, 2 * n, max);
}