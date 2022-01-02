#include <iostream>
using namespace std;
#include <cmath>

int Nhap_So();
void Square_Number(int n);

int main()
{
    int n;
    n = Nhap_So();
    Square_Number(n);

    return 0;
}

int Nhap_So()
{
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    return n;
}

void Square_Number(int n)
{
    if (sqrt(n) * sqrt(n) == n)
    {
        cout << n << " la so chinh phuong";
    }
    else
    {
        cout << n << " khong phai la so chinh phuong";
    }
}