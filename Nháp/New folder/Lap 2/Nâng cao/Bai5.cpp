#include <iostream>
using namespace std;

int Nhap_So(char c);
void Second_Number(int a, int b, int c);

int main()
{
    int a, b, c;
    a = Nhap_So('a');
    b = Nhap_So('b');
    c = Nhap_So('c');
    Second_Number(a, b, c);

    return 0;
}

int Nhap_So(char c)
{
    int n;
    cout << "Nhap " << c << ": ";
    cin >> n;

    return n;
}

void Second_Number(int a, int b, int c)
{
    int second;
    if ((b <= a && a <= c) || (b >= a && a >= c))
    {
        second = a;
    }
    else if ((a <= b && b <= c) || (a >= b && b >= c))
    {
        second = b;
    }
    else
    {
        second = c;
    }
    cout << "So lon nhi la: " << second;
}