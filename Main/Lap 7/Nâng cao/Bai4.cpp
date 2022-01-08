#include <stdio.h>
#include <math.h>

int Nhap_So(int x);
bool Check(int x);
void Liet_Ke(int x);

int main()
{
    int x = Nhap_So(x);

    return 0;
}

int Nhap_So(int x)
{
    do
    {
        printf("Nhap x: ");
        scanf("%d", &x);
        if (Check(x))
        {
            Liet_Ke(x);
        }
        else
        {
            printf("Khong hop le. Nhap lai!\n");
        }
    } while (!(Check(x)));
}

bool Check(int x)
{
    for (int i = 1; i < x; i++)
    {
        if (pow(2, i) == x)
        {
            return 1;
        }
    }
    return 0;
}

void Liet_Ke(int x)
{
    int count = 0;
    for (int i = 1; i <= x; i++)
    {
        if (pow(2, i) <= x)
        {
            count++;
        }
    }
    printf("%d = 2^%d", x, count);
}
