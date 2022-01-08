#include <stdio.h>

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

    } while (!(0 < n && n <= 99999));
    tachso(n);
    return 0;
}

int nhapso(char x)
{
    int k;
    printf("\nnhap %c: ", x);
    scanf("%d", &k);
    return k;
}

bool kiemtrasnt(int k)
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

void tachso(int n)
{
    int temp = n;
    int count = 0;
    while (temp > 0)
    {
        if (kiemtrasnt(temp % 10))
        {
            count++;
        }
        temp /= 10;
    }
    printf("%d co %d chu so nguyen to",n,count);
}
