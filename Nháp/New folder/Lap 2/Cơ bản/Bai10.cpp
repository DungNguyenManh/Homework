#include <iostream>
using namespace std;
#include <cmath>

int Nhap_So();
void Max_Number(int n);

int main()
{
    int n;
    n = Nhap_So();
    Max_Number(n);

    return 0;
}

int Nhap_So()
{
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    return n;
}

void Max_Number(int n)
{
    int temp = n;
    int max = 0;
    while (temp > 0)
    {
        if (temp % 10 > max)
        {
            max = temp % 10;
        }
        temp /= 10;
    }
    cout << "Chu so lon nhat trong " << n << " la: " << max;
}