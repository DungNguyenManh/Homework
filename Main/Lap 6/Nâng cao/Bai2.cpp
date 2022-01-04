#include <stdio.h>

int Nhap_So(int n);
void Kq(int n);

int main()
{
    int n = Nhap_So(n);
    Kq(n);

    return 0;
}

int Nhap_So(int n)
{
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    return n;
}

bool Kt_So_Doi_Xung(int n)
{
    int temp = n;
    int sum = 0;
    while(temp > 0){
        sum = sum * 10 + (temp % 10);
        temp/=10;
        }
    if(sum == n){
        return 1;
    }
    return 0;
}

bool Kt_So_May_Man(int n)
{
    int temp = n;
    while(temp > 0){
        if(!(temp % 10 == 6 || temp % 10 == 8)){
            return 0;
        }
        temp/=10;
    }
    return 1;
}

void Kq(int n)
{
    if(Kt_So_Doi_Xung(n) && Kt_So_May_Man(n)){
        printf("%d vua la so doi xung vua la so may man",n);
    }
    if(Kt_So_Doi_Xung(n) && Kt_So_May_Man(n) == 0){
        printf("%d la so doi xung khong phai so may man",n);
    }
    if(Kt_So_Doi_Xung(n) == 0 && Kt_So_May_Man(n)){
        printf("%d khong phai so doi xung nhung la so may man",n);
    }if(Kt_So_Doi_Xung(n) == 0 && Kt_So_May_Man(n) == 0){
        printf("%d khong la so doi xung va so may man",n);
    }
}