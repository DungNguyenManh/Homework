#include <stdio.h>

void Chuong_Trinh();
void Nhap_So(int &a, int &b);
void UCLN(int a, int b);
void Tong_So_Hang(int a, int b);
void Bang_Cuu_Chuong(int a, int b);

int main()
{
    Chuong_Trinh();

    return 0;
}

void Chuong_Trinh()
{
    int a, b;
    Nhap_So(a, b);
    UCLN(a, b);
    Tong_So_Hang(a, b);
    Bang_Cuu_Chuong(a, b);
}

void Nhap_So(int &a, int &b)
{
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
}

void UCLN(int a, int b)
{
    int temp1 = a, temp2 = b;
    while (temp1 != temp2)
    {
        if (temp1 > temp2)
        {
            temp1 -= temp2;
        }
        else
        {
            temp2 -= temp1;
        }
    }
    printf("Uoc so chung lon nhat cua %d va %d la: %d\n", a, b, temp1);
}

void Tong_So_Hang(int a, int b)
{
    int temp1 = a, sum1 = 0, variable1, variable2;
    while (temp1 > 0)
    {
        sum1++;
        temp1 /= 10;
    }
    int temp2 = b, sum2 = 0;
    while (temp2 > 0)
    {
        sum2++;
        temp2 /= 10;
    }
    if (sum1 > sum2)
    {
        printf("Tong so hang cua %d lon hon %d\n", a, b);
    }
    else if (sum1 < sum2)
    {
        printf("so hang cua %d lon hon %d\n", b, a);
    }
    else
    {
        printf("Tong so luong %d va %d bang nhau\n", a, b);
    }
}

bool So_Sanh_ab(int a, int b)
{
    if (a > b)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void Bang_Cuu_Chuong(int a, int b)
{
    if (So_Sanh_ab(a, b))
    {
        for (int i = a; i <= b; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                printf("%2d * %2d = %2d\n", i, j, i * j);
            }
            printf("\n\n");
        }
    }
    else
    {
        for (int i = b; i <= a; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                printf("%2d * %2d = %2d\n", i, j, i * j);
            }
            printf("\n\n");
        }
    }
}