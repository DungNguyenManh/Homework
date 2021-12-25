#include <stdio.h>

int Nhap_so(char c);

int main()
{
    int n, sumsole = 0,sumsochan = 0, Tsole = 1,Tsochan = 1, sochan, sole, temp = 0;
    n = Nhap_so('n');
    while (n > 0)
    {
        temp = temp * 10 + (n % 10);
        if (temp % 2 == 0)
        {
            sumsochan += temp;
            Tsochan *= temp;
        }if(temp % 2 != 0){
            sumsole += temp;
            Tsole *= temp;
        }
        n /= 10;
    }
    printf("Tong so chan = %d",sumsochan);
    printf("\nTich so chan = %d",Tsochan);
    printf("\nTong so le = %d",sumsole);
    printf("\nTich so le = %d",Tsole);

    return 0;
}

int Nhap_so(char c)
{
    int k;
    printf("Nhap so nguyen duong %c: ", c);
    scanf("%d", &k);
    return k;
}