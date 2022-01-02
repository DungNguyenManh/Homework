#include <iostream>
using namespace std;
#include <cmath>

int Nhap_So(char c);
void Pt_Bac2(int a, int b, int c);

int main()
{
    float a, b, c;
    a = Nhap_So('a');
    b = Nhap_So('b');
    c = Nhap_So('c');
    Pt_Bac2(a, b, c);

    return 0;
}

int Nhap_So(char c)
{
    int n;
    cout << "Nhap " << c << ": ";
    cin >> n;

    return n;
}

void Pt_Bac2(int a, int b, int c)
{
    float delta = b * b - 4 * a * c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "Phuong trinh co vo so nghiem";
            }
            else
            {
                cout << "Phuong trinh vo nghiem";
            }
        }
        else
        {
            cout << "Phuong trinh co 1 nghiem: " << -c / b;
        }
    }
    else
    {
        if (delta < 0)
        {
            cout << "Phuong trinh vo nghiem";
        }
        else if (delta == 0)
        {
            cout << "Phuong trinh co nghiem kep: " << -b / (2 * a);
        }
        else
        {
            cout << "Phuong trinh co 2 nghiem phan biet: "
                 << "\nx1 = " << (-b + sqrt(delta)) / (2 * a)
                 << "\nx2 = " << (-b - sqrt(delta)) / (2 * a);
        }
    }
}