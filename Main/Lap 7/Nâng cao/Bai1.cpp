#include <stdio.h>
#include <math.h>

int nhapso(char x);
void kiemtrasole(int n, int m);

int main()
{
    int n, m, x;
    do
    {
        n = nhapso('n');
        m = nhapso('m');

        if (!(n < m))
        {
            printf("nhap lai m sao cho n<m!");
            m = nhapso('m');
        }

    } while (!(n < m));
    kiemtrasole(n, m);
    return 0;
}


int nhapso(char x)
{
    printf("\nnhap %c:", x);
    scanf("%d", &x);
    return x;
}


void kiemtrasole(int n, int m)
{
    printf("cac so le nam trong {n;m} la: ");
    for (int i = n; i <= m; i++)
    {
        if (i % 2 != 0)
        {
            printf("\t%d", i);
        }
    }
}