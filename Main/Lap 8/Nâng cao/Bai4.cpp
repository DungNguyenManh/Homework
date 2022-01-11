#include <stdio.h>
#include <math.h>

void Chuong_Trinh();
void Nhap_So(int &n);
void Cau_1(int n);
void Cau_2(int n);
void Cau_3(int n);
void Cau_4(int n);
void Cau_5(int n);
void Cau_6(int n);
void Cau_7(int n);
void Nhap_So_Cau_8(int &x);
void Cau_8(int x, int n);

int main()
{
    Chuong_Trinh();

    return 0;
}

void Menu()
{
    printf("\n\n\t\t----------------- Menu -----------------\n\n");
    printf("\n\n\t0. Nhap lai n");
    printf("\n\n\t1. S = 1! + 2! + 3! + ... + n!");
    printf("\n\n\t2. S = 1/1! + 1/2! + 1/3! + ... + 1/n!");
    printf("\n\n\t3. S = (1) + (1+2) + (1+2+3) + (1+2+3+4) + (1+2+3+4+5) + (1+2+3+...+n)");
    printf("\n\n\t4. S = (1) + (1*2) + (1*2*3) + (1*2*3+...*n)");
    printf("\n\n\t5. S = 1/1*2 + 2/2*3 + 3/3*4 + ... + n/(n*n+1)");
    printf("\n\n\t6. S = 1 + 1+2/2 + 1+2+3/3 + ... + 1+2+3+...+n/n");
    printf("\n\n\t7. S = 1 + 1+2/2! + 1+2+3/3! + ... + 1+2+3+...+n/n!");
    printf("\n\n\t8. S = x + x^2/2! + x^3/3! + x^n/n!");
    printf("\n\n\t9. Ket thuc chuon trinh");
    printf("\n\n\t\t----------------- End -----------------");
}

void Chuong_Trinh()
{
    int n, chon_cau, x;
    Nhap_So(n);
    while (true)
    {
        Menu();
        do
        {
            printf("\nMoi chon cau: ");
            scanf("%d", &chon_cau);
            if (!(0 <= chon_cau && chon_cau <= 9))
            {
                printf("Khong hop le. Nhap lai!\n");
            }
        } while (!(0 <= chon_cau && chon_cau <= 9));
        switch (chon_cau)
        {
        case 0:
            Nhap_So(n);
            break;
        case 1:
            Cau_1(n);
            break;
        case 2:
            Cau_2(n);
            break;
        case 3:
            Cau_3(n);
            break;
        case 4:
            Cau_4(n);
            break;
        case 5:
            Cau_5(n);
            break;
        case 6:
            Cau_6(n);
            break;
        case 7:
            Cau_7(n);
            break;
        case 8:
            Nhap_So_Cau_8(x);
            Cau_8(x, n);
            break;
        default:
            printf("\nKet thuc chuong trinh");
            return;
        }
    }
}

void Nhap_So(int &n)
{
    printf("Nhap so n: ");
    scanf("%d", &n);
}

void Cau_1(int n)
{
    int sum = 0, giaithua = 1;
    for (int i = 1; i <= n; i++)
    {
        giaithua *= i;
        sum += giaithua;
    }
    printf("Tong tu 1! den %d! la: %d", n, sum);
}
void Cau_2(int n)
{
    float giaithua = 1, sum = 0;
    for (float i = 1; i <= n; i++)
    {
        giaithua *= i;
        sum += 1 / (giaithua);
    }
    printf("Tong giai thua la: %.2f", sum);
}

void Cau_3(int n)
{
    int sum = 0, temp = 0;
    for (int i = 1; i <= n; i++)
    {
        temp += i;
        sum += temp;
    }
    printf("Tong la: %d", sum);
}

void Cau_4(int n)
{
    int sum = 0, temp = 1;
    for (int i = 1; i <= n; i++)
    {
        temp *= i;
        sum += temp;
    }
    printf("Tong la: %d", sum);
}

void Cau_5(int n)
{
    float sum = 0;
    for (float i = 1; i <= n; i++)
    {
        sum += i / (i * (i + 1));
    }
    printf("Tong la: %.2f", sum);
}

void Cau_6(int n)
{
    float sum = 0, temp = 0;
    for (float i = 1; i <= n; i++)
    {
        temp += i;
        sum += temp / i;
    }
    printf("Tong la: %.2f", sum);
}

void Cau_7(int n)
{
    float giaithua = 1, sum = 0, temp = 0;
    for (float i = 1; i <= n; i++)
    {
        giaithua *= i;
        temp += i;
        sum += temp / giaithua;
    }
    printf("Tong la: %.2f", sum);
}

void Nhap_So_Cau_8(int &x)
{
    printf("Nhap x: ");
    scanf("%d", &x);
}

void Cau_8(int x, int n)
{
    float giaithua = 1, sum = 0, temp = 0;
    for (float i = 1; i <= n; i++)
    {
        giaithua *= i;
        sum += pow(x, i) / giaithua;
    }
    printf("Tong la: %.2f", sum);
}