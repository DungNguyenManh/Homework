#include <iostream>
using namespace std;

int Nhap_So(char c);
void Max(int a, int b);

int main()
{
    int a, b;
    a = Nhap_So('a');
    b = Nhap_So('b');
    Max(a, b);

    return 0;
}

int Nhap_So(char c)
{
    int n;
    cout << "Nhap " << c << ": ";
    cin >> n;
    return n;
}

void Max(int a, int b)
{
    int max = a;
    if (max <= b)
    {
        max = b;
    }
    else
    {
        max = a;
    }
    cout << "So lon nhat la: " << max;
}