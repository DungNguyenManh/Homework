#include <iostream>
using namespace std;

int Nhap_So(char c);
void Tong_Hieu_Tich_Thuong(int x, int y);

int main()
{
    int x, y;
    x = Nhap_So('x');
    y = Nhap_So('y');
    Tong_Hieu_Tich_Thuong(x, y);

    return 0;
}

int Nhap_So(char c)
{
    int n;
    cout << "Nhap " << c << ": ";
    cin >> n;
    return n;
}

void Tong_Hieu_Tich_Thuong(int x, int y)
{
    cout << "" << x << " + " << y << " = " << x + y;
    cout << "\n"
         << x << " - " << y << " = " << x - y;
    cout << "\n"
         << x << " * " << y << " = " << x * y;
    cout << "\n"
         << x << " / " << y << " = " << (float)x / y;
}