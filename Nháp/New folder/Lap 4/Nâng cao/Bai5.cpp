#include<iostream>
using namespace std;

int main(){
    int n, sole = 0, sochan = 0;
    cout << "Nhap n: ";
    cin >> n;
    int temp = n;
    while(temp > 0){
        if(temp % 10 % 2 == 0){
            sochan++;
        }else{
            sole++;
        }
        temp /= 10;
    }
    cout << "So luong so chan: " << sochan;
    cout << "\nSi luong so le: " << sole;

}