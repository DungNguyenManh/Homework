#include <stdio.h>
#include<math.h>

void Chuong_Trinh();
void Cau1();
float Nhap_So_Cau_1();
void Can_Bac_2_Cau_1();
/*void Cau2();
void Cau3();
void Cau4();
void Cau5();*/

int main()
{
    Chuong_Trinh();
    return 0;
}

void Menu()
{
    printf("\n\t\t----------------- Menu -----------------");
    printf("\n\t1. Can bac 2 cua so thuc");
    printf("\n\t2. Tri tuyet doi cua so thuc");
    printf("\n\t3. In ra dau (*) ");
    printf("\n\t4. Doc va in ra tong cac so tu 1 -> n");
    printf("\n\t5. In ra ma ASCII");
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
            if (!(0 <= chon_cau && chon_cau <= 5))
            {
                printf("Khong hop le. Moi nhap lai!\n");
            }  
        } while (!(0 <= chon_cau && chon_cau <= 5));
        switch (chon_cau)
        {
        case 1:
            Cau1();
            Nhap_So_Cau_1();
            Can_Bac_2_Cau_1();
            break;
        /*case 2:
            Cau2();
            break;
        case 3:
            Cau3();
            break;
        case 4:
            Cau4();
            break;
        case 5:
            Cau5();
            break;*/
        default:
            printf("Ket thuc chuong trinh\n");
            return;
        }
    }
}

void Cau1()
{
    float a;
    //Nhap_So_Cau_1();
    printf("a = %.f",a);
    //Can_Bac_2_Cau_1(a);
}

float Nhap_So_Cau_1()
{
    float a;
    printf("Nhap so thuc a: ");
    scanf("%f",&a);
    return a;
}

void Can_Bac_2_Cau_1()
{
    float a;
    float temp = sqrt(a); 
    printf("Tri tuyet doi cua %.f la: %.2f",a,temp);
}

/*void Cau2()
{
    printf("Good Afternoon"); 
}
void Cau3()
{
    printf("Good Everning");
}*/