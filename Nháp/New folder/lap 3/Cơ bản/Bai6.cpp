#include <iostream>
using namespace std;

int Nhap_Gio();
int Nhap_Phut();
int Nhap_Giay();
void Time_Sau_1s(int h, int m, int s);

int main()
{
    int h, m, s;
    h = Nhap_Gio();
    m = Nhap_Phut();
    s = Nhap_Giay();
    Time_Sau_1s(h, m, s);

    return 0;
}

int Nhap_Gio()
{
    int h;
    do{
    cout << "Nhap gio: ";
    cin >> h;
    if(!(0 <= h && h <= 23)){
        cout << "Gio khong hop le. Nhap lai!\n";
    }
    }while(!(0 <= h && h <= 23));
    return h;
}

int Nhap_Phut(){
    int m;
    do{
    cout << "Nhap phut: ";
    cin >> m;
    if(!(0 <= m && m <= 59)){
        cout << "Phut khong hop le. Nhap lai!\n";
    }
    }while(!(0 <= m && m <= 59));
    return m;
}

int Nhap_Giay(){
    int s;
    do{
    cout << "Nhap giay: ";
    cin >> s;
    if(!(0 <= s && s <= 59)){
        cout << "Giay khong hop le. Nhap lai!\n";
    }
    }while(!(0 <= s && s <= 59));
    return s;
}

void Time_Sau_1s(int h, int m, int s)
{
    s++;
    if (s >= 60)
    {
        s = 0;
        m++;
        if (m >= 60)
        {
            m = 0;
            h++;
            if (h >= 24)
            {
                h = 0;
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
}