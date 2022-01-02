#include <iostream>
using namespace std;
#include <cmath>

int Nhap_So(char c);
void Giai_Pt_Bac1(int a, int b);

int main()
{
    int a, b;
    a = Nhap_So('a');
    b = Nhap_So('b');
    Giai_Pt_Bac1(a, b);

    return 0;
}

int Nhap_So(char c)
{
    int n;
    cout << "Nhap " << c << ": ";
    cin >> n;
    return n;
}

void Giai_Pt_Bac1(int a, int b)
{
    if (a == 0)
    {
        if (b == 0)
        {
            cout << "Phuong trinh vo so nghiem";
        }
        else
        {
            cout << "Phuong trinh vo nghiem";
        }
    }
    else
    {
        cout << "Phuong trinh co 1 nghiem: " << (float)-b / a;
    }
}