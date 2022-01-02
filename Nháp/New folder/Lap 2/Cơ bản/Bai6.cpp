#include <iostream>
using namespace std;

int Nhap_So();
void Year_Nhuan(int nam);

int main()
{
    int nam;
    nam = Nhap_So();
    Year_Nhuan(nam);

    return 0;
}

int Nhap_So()
{
    int n;
    cout << "Nhap nam: ";
    cin >> n;
    return n;
}

bool Check_Year(int nam){
    if(nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)){
        return 1;
    }else{
        return 0;
    }
}

void Year_Nhuan(int nam){
    if(Check_Year(nam)){
        printf("%d la nam nhuan",nam);
    }else{
        printf("%d khong phai la nam nhuan",nam);
    }

}