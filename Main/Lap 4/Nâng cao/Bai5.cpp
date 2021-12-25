#include <stdio.h>

int Nhap_so(char c);

int main()
{
    int n, sochan = 0, sole = 0, temp;
    n = Nhap_so('n');
    temp = 0;
    while (n > 0)
    {
        temp = temp * 10 + (n % 10);
        if (temp % 2 == 0)
        {
            sochan++;
        }
        if (temp % 2 != 0)
        {
            sole++;
        }
        n /= 10;
    }

    printf("so chan: %d", sochan);
    printf("\nso le: %d", sole);

    return 0;
}

int Nhap_so(char c)
{
    int k;
    printf("Nhap so nguyen duong %c: ", c);
    scanf("%d", &k);
    return k;
}