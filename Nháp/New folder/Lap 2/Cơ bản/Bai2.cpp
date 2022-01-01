#include <iostream>
using namespace std;

int Nhap_So(char c);
void Swap(int a, int b);

int main()
{
    int a = Nhap_So('a');
    int b = Nhap_So('b');
    Swap(a, b);

    return 0;
}

int Nhap_So(char c)
{
    int n;
    cout << "Nhap " << c << ": ";
    cin >> n;
    return n;
}

void Swap(int a, int b)
{
    int temp = a, temp1 = b;
    if (a > b)
    {
        a += b;
        b = a - b;
        a -= b;
        printf("Vi a = %d > b = %d nen doi cho: a = %d, b = %d", temp, temp1, a, b);
    }
    else
    {
        printf("Vi a = %d <= b = %d nen khong doi cho", temp, temp1);
    }
}