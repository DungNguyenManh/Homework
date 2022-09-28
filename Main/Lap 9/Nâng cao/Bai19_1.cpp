#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    char a[] = {'k', 'm', 'h', 'b', 'b', 'n', 's', 'b', 't', 'c'};
    int k = 1;
    while(k * 10 <= n)
        k *= 10;
    while(k > 1)
    {
        n /= k;
        printf("%s ", a[n]);
        n %= k;
        k /= 10;
    }



    return 0;
}