#include <stdio.h>
#include <math.h>

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

bool Check_Element_Number(int n)
{
    if(n < 2){
        return 0;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;            
}

void Kq(int n)
{
    int t = 1, a;
    for(int i = 1; i < sqrt(n); i++){
        if(Check_Element_Number(n)){
            t*=i;
            if(t <= n){
                a = t;
            }
        }
    }
    printf("abc %d",t);
}