#include <iostream>
using namespace std;

int Nhap_Thang();
void Day_Of_Month(int month);

int main()
{
    int month = Nhap_Thang();
    Day_Of_Month(month);

    return 0;
}

int Nhap_Thang()
{
    int n;
    do
    {
        cout << "Nhap thang: ";
        cin >> n;
        if (!(1 <= n && n <= 12))
        {
            cout << "Thang khong le. Nhap lai!\n";
        }
    } while (!(1 <= n && n <= 12));
    return n;
}

void Day_Of_Month(int month)
{
    switch (month)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "Thang " << month << " co 30 ngay";
        break;
    case 2:
        cout << "Thang " << month << " khong xet nam nhuan thi co 28 or 29 ngay";
        break;
    default:
        cout << "Thang " << month << " co 31 ngay";
    }
}