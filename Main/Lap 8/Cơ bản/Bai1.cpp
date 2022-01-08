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
    printf("\n\t1. Good Morning");
    printf("\n\t2. Good Afternoon");
    printf("\n\t3. Good Everning");
    printf("\n\t4. Ket thuc chuong trinh");
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
            if (!(1 <= chon_cau && chon_cau <= 4))
            {
                printf("Khong hop le. Moi nhap lai!\n");
            }
        } while (!(1 <= chon_cau && chon_cau <= 4));
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
        default:
            printf("Ket thuc chuong trinh\n");
            return;
        }
    }
}

void Cau1()
{
    printf("Good Morning");
}

void Cau2()
{
    printf("Good Afternoon"); 
}
void Cau3()
{
    printf("Good Everning");
}