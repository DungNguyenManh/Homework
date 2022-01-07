#include <stdio.h>

void Chuong_Trinh();
void Cau1();
void Cau2();
void Cau3();
void Cau4();

int main()
{
    Chuong_Trinh();
    return 0;
}

void Menu()
{
    printf("\n\t\t----------------- Menu -----------------");
    printf("\n\t1. Bai 1");
    printf("\n\t2. Bai 2");
    printf("\n\t3. Bai 3");
    printf("\n\t4. Bai 4");
    printf("\n\t0. Ket thuc chuong trinh");
    printf("\n\t\t------------------ End -----------------");
}

void Chuong_Trinh()
{
    int chon_cau;
    while (true)
    {
        Menu();
        do
        {
            printf("\nMoi chon cau: ");
            scanf("%d", &chon_cau);
            if (!(0 <= chon_cau && chon_cau <= 4))
            {
                printf("Khong hop le. Moi nhap lai!\n");
            }
        } while (!(0 <= chon_cau && chon_cau <= 4));
        switch (chon_cau)
        {
        case 1:
            Cau1();
            break;
        case 2:
            Cau2();
            break;
        case 3:
            Cau3();
            break;
        case 4:
            Cau4();
            break;
        default:
            printf("Ket thuc chuong trinh\n");
            return;
        }
    }
}

void Cau1()
{
    printf("Cau 1: \n");
    int a= 6,b=5;
    printf("a+b=%d\n\n",a+b);
}

void Cau2()
{
    printf("Cau 2: \n");
    int a= 6,b=5;
    printf("a-b=%d\n\n",a-b);  
}
void Cau3()
{
    printf("Cau 3: \n");
    int a= 6,b=5;
    printf("a*b=%d\n\n",a*b);
}

void Cau4()
{
    printf("Cau 4: \n");
    int a= 6,b=5;
    printf("a/b=%d\n\n",a/b);  
}