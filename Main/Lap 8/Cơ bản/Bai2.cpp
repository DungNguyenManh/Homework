#include <stdio.h>
#include <math.h>

void ChuongTrinh();
void Cau_1();
void Cau_2();
void Cau_3();
void Cau_4();

int main()
{
    ChuongTrinh();

    return 0;
}

void Menu()
{
    printf("---------- Menu ----------");
    printf("\n1. Nhap so thuc roi in ra can bac 2 cua so thuc do");
    printf("\n2. Nhap so thuc roi in ra tri tuyet doi cua so thuc do");
    printf("\n3. Nhap so nguyen duong n, in ra n dau sao (*)");
    printf("\n4. Doc so nguyen n roi in ra tong tu 1 den n");
    printf("\n0. Ket thuc chuong trinh");
}

void ChuongTrinh()
{
    int cau;
    bool chuongtrinh = true;
    while (chuongtrinh)
    {
        Menu();
        printf("\nMoi chon cau: ");
        scanf("%d", &cau);
        switch (cau)
        {
        case 1:
            Cau_1();
            break;
        case 2:
            Cau_2();
            break;
        case 3:
            Cau_3();
            break;
        case 4:
            Cau_4();
            break;
        case 0:
            printf("Ket thuc chuong trinh");
            chuongtrinh = false;
        }
    }
}

void Cau_1()
{
    float sothuc, canbac2;
    do
    {
        printf("Nhap so thuc: ");
        scanf("%f", &sothuc);
        if (!(sothuc > 0))
            printf("Nhap so thuc > 0 \n");
    } while (!(sothuc > 0));
    canbac2 = sqrt(sothuc);
    printf("\nCan bac 2 cua %.2f la: %.2f\n", sothuc, canbac2);
}

void Cau_2()
{
    float sothuc, trituyetdoi;
    printf("Nhap so thuc: ");
    scanf("%f", &sothuc);
    trituyetdoi = abs(sothuc);
    printf("\nTri tuyet doi cua %.2f la: %.2f\n", sothuc, trituyetdoi);
}

void Cau_3()
{
    int n;
    do
    {
        printf("Nhap so nguyen duong n: ");
        scanf("%d", &n);
        if (!(n > 0))
            printf("Nhap lai! \n");
    } while (!(n > 0));
    for (int i = 0; i < n; i++)
    {
        printf(" * ");
    }
}

void Cau_4()
{
    int n, sum = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("\nTong cac so tu 1 den %d la: %d\n", n, sum);
}