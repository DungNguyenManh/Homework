#include<stdio.h>

bool KT_SoDoiXung(int n);

int main()
{
    int n = 95;
    printf("n = %d\n", n);
    KT_SoDoiXung(n);
    if(KT_SoDoiXung(n))
        printf("sdx");
    else
        printf("kdx");
    return 0;
}

bool KT_SoDoiXung(int n)
{
    int temp = n, sum = 0;
    while(temp > 0)
    {
        sum = sum * 10 + (temp % 10);
        temp /= 10;
    }
    if(sum == n)
        return 1;
    else
        return 0;
}