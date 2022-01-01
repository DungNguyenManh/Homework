#include<iostream>
using namespace std;

int Nhap_So(int n);
void So_Am(int n);
void So_Chan_Le(int n);

int main(){
    int n = Nhap_So(n);
    So_Am(n);
    So_Chan_Le(n);

    return 0;
}

int Nhap_So(int n){
    cout << "Nhap so nguyen n: ";
    cin >> n;
    return n;
}

void So_Am(int n){
    if(n < 0){
        printf("%d la so am",n);
    }
    else{
        printf("%d khong phai la so am",n);
    }
}

void So_Chan_Le(int n){
    if(n % 2 == 0){
        printf("\n%d la so chan",n);
    }
    else{
        printf("\n%d la so le",n);
    }
}
