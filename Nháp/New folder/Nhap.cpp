#include <stdio.h>
#include <ostream>
void menu();
int nhapso1(int a);
int nhapso2(int b);
void UCLN(int a, int b);
int main()
{
    int a, b;
    menu();
    a = nhapso1(a);
    b = nhapso2(b);
    return 0;
}

void menu()
{
    int a = 0, b = 0;
    bool tieptuc = true;
    char chucnang;
    while (tieptuc)
    {
        printf("\n\n CHUONG TRINH CO CAC CHUC NANG SAU:");
        printf("\na.-Cho nhap so thu nhat (a).");
        printf("\nb.-Cho nhap so thu hai (b).");
        printf("\nc.-tim uoc so chung lon nhat cua a va b.");
        printf("\nd.-cho biet tong cac so hang trong tung so a va b, tong nao lon hon.");
        printf("\ne.-in cac bang cuu chung tu a den b (hoac b den a).");
        printf("\n Ban chon (a-e): ");
        scanf("%c", &chucnang);
        switch ('chucnang')
        {
        case 'a':
            a = nhapso1(a);
            break;
        case 'b':
            b = nhapso2(b);
            break;
        case 'c':
            UCLN(a, b);
            break;
        case 'd':
            printf("-----Good evening!-----");
            break;
        default:
            printf("-----Good evening!-----");
            
    }
}

int nhapso1()
{
    int a
    printf("nhap so a:");
    scanf("%d", &a);
    return a;
}

int nhapso2(int b)
{
    printf("nhap so b:");
    scanf("%d", &b);
    return b;
void UCLN(int a, int b)
{
    if (a == 0 && b == 0)
    {
        a = nhapso1(a);
        b = nhapso2(b);
    }
    int a1 = a;
    int b1 = b;
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    printf("UCLN cua %d va %d la: %d", a1, b1, a);
}