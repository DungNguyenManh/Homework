#include <stdio.h>

int Nhap_So(long n);
void So_Doi_Xung(long n);

int main()
{
    long n = Nhap_So(n);
    So_Doi_Xung(n);

    return 0;
}

int Nhap_So(long n)
{
    do{
    printf("Nhap so nguyen duong n: ");
    scanf("%ld", &n);
    if(!(10000 <= n && n <= 99999)){
        printf("Nhap so co 5 chu so\n");
    }
    }while(!(10000 <= n && n <= 99999));
    return n;
}

void So_Doi_Xung(long n)
{
    long temp = n;
    long sum = 0;
    while(temp > 0){
        sum = sum * 10 + (temp % 10);
        temp/=10;
    }
    if(sum == n){
        printf("%d la so doi xung",n);
    }else{
        printf("%d khong phai la so doi xung",n);
    }

}