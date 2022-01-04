#include <stdio.h>

int Nhap_So(int n);
void Kq(int n);

int main()
{
    int n = Nhap_So(n);
    Kq(n);

    return 0;
}

int Nhap_So(int n)
{
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    return n;
}

bool Kt_Tang_dan(int n)
{
    int temp = n;
    int chusocuoicung = temp % 10;
    temp /= 10;
    while (temp > 0)
    {
        int chusokecuoi = temp % 10;
        if (chusocuoicung < chusokecuoi)
        {
            return 0;
        }
        else
        {
            chusocuoicung = chusokecuoi;
        }
        temp /= 10;
    }
    return 1;
}

void Kq(int n)
{
    if (Kt_Tang_dan(n))
    {
        printf("Co tang dan tu trai sang phai");
    }
    else
    {
        printf("Khong tang dan tu trai sang phai");
    }
}