#include <stdio.h>
#include <math.h>
#define Max 1000

int Nhap_Lieu_Cau_2(char c);
void Liet_Ke_So_Chinh_Phuong_Nho_Hon_n(int n);
int Nhap_Lieu_Cau_3();
void Tinh_Tong_n_So_Chinh_Phuong_Dau_Tien(int k);

int main()
{
    int chonbai, n, k;
    printf("\t\t============= MENU ============\n");
    printf("2. Liet ke so chinh phuong nho hon n\n");
    printf("3. Tinh tong n so chinh phuong dau tien\n");
    printf("5. Nhap mang 1 chieu va thuc hien yeu cau\n");
    printf("0. \t\t============= END ============\n");
    do
    {
        printf("Moi chon bai: ");
        scanf("%d", &chonbai);
        if (!(0 <= chonbai && chonbai <= 5))
        {
            printf("Khong hop le. Moi chon lai!\n");
        }
    } while (!(0 <= chonbai && chonbai <= 5));
    if (chonbai == 2)
    {
        n = Nhap_Lieu_Cau_2('n');
        Liet_Ke_So_Chinh_Phuong_Nho_Hon_n(n);
    }
    else if (chonbai == 3)
    {
        k = Nhap_Lieu_Cau_3();
        Tinh_Tong_n_So_Chinh_Phuong_Dau_Tien(k);
    }

    return 0;
}

int Nhap_Lieu_Cau_2(char c)
{
    int n;
    printf("Nhap so nguyen duong %c: ", c);
    scanf("%d", &n);
    return n;
}

void Liet_Ke_So_Chinh_Phuong_Nho_Hon_n(int n)
{
    printf("Cac so chinh phuong nho hon %d la: ", n);
    for (int i = 0; i < n; i++)
    {
        if (i * i < n)
        {
            printf("%2d ", i * i);
        }
    }
}

int Nhap_Lieu_Cau_3()
{
    int k;
    printf("Nhap n so chinh phuong dau tien: ");
    scanf("%d", &k);
    return k;
}

void Tinh_Tong_n_So_Chinh_Phuong_Dau_Tien(int k)
{
    int sum = 0;
    for (int i = 0; i <= k - 1; i++)
    {
        sum += (i * i);
    }
    printf("\n%2d ", sum);
}
