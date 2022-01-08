#include <stdio.h>

void Nhap_So(int &n, int &m);
void KQ(int n, int m);

int main()
{
    int n, m;
    Nhap_So(n, m);
    KQ(n, m);

    return 0;
}

void Nhap_So(int &n, int &m)
{
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap m: ");
    scanf("%d", &m);
}

bool Check(int temp)
{
    if (temp < 2)
    {
        return 0;
    }
    for (int i = 2; i < temp; i++)
    {
        if (temp % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void KQ(int n, int m)
{
    printf("%d so nguyen to > %d la: ", n, m);
    int count = 1;
    int variable = m + 1;
    while (count <= n)
    {
        if (Check(variable))
        {
            printf("%2d ", variable);
            count++;
        }
        variable++;
    }
}