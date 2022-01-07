#include <stdio.h>

int Nhap_So(int n);
void Down(int n);

int main()
{
    int n;
    n = Nhap_So(n);
    Down(n);

    return 0;
}

int Nhap_So(int n)
{
    printf("Nhap n: ");
    scanf("%d", &n);
    return n;
}

bool Check_Down(int n)
{
    int chusocuoicung = n % 10;
    int temp = n / 10;
    int sokecuoi;
    while (temp > 0)
    {
        sokecuoi = temp % 10;
        if (sokecuoi < chusocuoicung)
        {
            return false;
        }
        else
        {
            chusocuoicung = sokecuoi;
        }
        temp /= 10;
    }
    return true;
}

void Down(int n)
{
    if (Check_Down(n))
    {
        printf("%d giam dan tu trai sang phai", n);
    }
    else
    {
        printf("%d khong giam dan tu trai sang phai", n);
    }
}