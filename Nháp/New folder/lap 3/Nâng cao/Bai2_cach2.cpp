#include <iostream>
using namespace std;

int main()
{
    int ngay, thang, nam, songay_trongthang;
    cout << "Nhap ngay: ";
    cin >> ngay;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;
    ngay--;
    if (ngay <= 0)
    {
        thang--;
        switch (thang)
        {
        case 2:
            if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
            {
                songay_trongthang = 29;
            }
            else
            {
                songay_trongthang = 28;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            songay_trongthang = 30;
        default:
            songay_trongthang = 31;
        }
        if(thang <= 0){
            thang = 12;
            nam--;
        }      
    }
    if(ngay <= 0){
        ngay = songay_trongthang;
    }
    cout << ngay << "/" << thang << "/" << nam;
    
    return 0;
}