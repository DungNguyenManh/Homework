#include <iostream>
using namespace std;

int main()
{
    int h, m, s;
    cout << "Nhap gio: ";
    cin >> h;
    cout << "Nhap phut: ";
    cin >> m;
    cout << "Nhap giay: ";
    cin >> s;
    s--;
    if (s <= 0)
    {
        s = 59;
        m--;
        if (m <= 0)
        {
            m = 59;
            h--;
            if (h <= 0)
            {
                h = 23;
                cout << h << ":" << m << ":" << s;
            }
            else
            {
                cout << h << ":" << m << ":" << s;
            }
        }
        else
        {
            cout << h << ":" << m << ":" << s;
        }
    }
    else
    {
        cout << h << ":" << m << ":" << s;
    }

    return 0;
}