#include<iostream>
using namespace std;

int main(){
    int ngay, thang, nam;
    cout << "Nhap ngay: ";
    cin >> ngay;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;
    int temp = ngay;
    for(int i = 1; i < thang; i++){
        switch(i){
            case 4: case 6: case 9: case 11:
                temp+=30;
                break;
            case 2:
                temp+= 28+((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0));
                break;
            default:
                temp+=31;
        }
    }
    cout << "Ngay thang nam vua nhap la ngay thu " << temp << " trong nam";


    return 0;
}