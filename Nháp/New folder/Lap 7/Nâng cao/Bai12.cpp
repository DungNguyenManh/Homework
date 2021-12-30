#include <stdio.h>
#include <math.h>
int nhapso(char x);
bool kiemtrasnt(int k);
void tachso(int n);
int main()
{
    int n;
    do
    {
        n = nhapso('n');

        if (!(0 < n && n < 99999))
        {
            printf("nhap lai n sao cho 0<n<99999");
        }

    } while (!(0 < n && n < 99999));
    tachso(n);
    return 0;
}

int nhapso(char x)
{
    int k;
    printf("\nnhap %c:", x);
    scanf("%d", &k);
    return k;
}

bool kiemtrasnt(int k)
{
    if (k < 2)
        return false;
    if (k >= 2)
        for (int i = 2; i < (k - 1); i++)
        {
            if (k % i == 0)
            {
                return false;
            }
            return true;
        }
}

void tachso(int n)
{
    printf("so %d co cac chu so la so nguyen to: ", n);
    while (n > 0)
    {
        int i;
        i = n % 10;
        if (kiemtrasnt(i))
        {
            printf("\t%d", i);
        }
        n = n / 10;
    }
}

