#include <stdio.h>
int Nhap_So(int n);
void Tim_Chu_So_Lon_Nhat(int n);

int main()
{
    int n;
    n = Nhap_So(n);
    Tim_Chu_So_Lon_Nhat(n);

    return 0;
}

int Nhap_So(int n)
{
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    return n;
}

void Tim_Chu_So_Lon_Nhat(int n)
{
    int temp = n;
    int max = 0;
    int i;
    if (n == 0)
    {
        max = 0;
    }
    while (n > 0)
    {
        i = n % 10;
        if (max < i)
        {
            max = i;
        }
        n /= 10;
    }
    printf("Chu so lon nhat trong %d la: %d", temp, max);
}