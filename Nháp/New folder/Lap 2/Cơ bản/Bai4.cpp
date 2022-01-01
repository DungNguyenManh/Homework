#include<iostream>
using namespace std;

int Nhap_So(char c);
void Max(int a, int b, int c);

int main(){
    int a, b, c;
    a = Nhap_So('a');
    b = Nhap_So('b');
    c = Nhap_So('c');
    Max(a,b,c);


    return 0;
}

int Nhap_So(char c)
{
    int n;
    cout << "Nhap " << c << ": ";
    cin >> n;

    return n;
}

void Max(int a, int b, int c)
{
    int max;
    if(a >= b && a >= c){
        max = a;
    }else{
        if(b >= c){
            max = b;
        }else{
            max = c;
        }
    }
    cout << "So lon nhat trong 3 so la: " << max;
}