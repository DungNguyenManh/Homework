#include <stdio.h>
#include <math.h>
#define Max 100

void Liet_Ke_So_Chinh_Phuong_Nho_Hon_n(int n);
void Tong_n_So_Chinh_Phuong_Dau_Tien(int n);

int main()
{
    int a[Max], n, chon_bai, b;
    do
    {
        printf("Moi chon bai: ");
        scanf("%d", &chon_bai);
        if (chon_bai < 2 || chon_bai > 5)
        {
            printf("Moi nhap lai bai tu 2-5\n");
        }
    } while (chon_bai < 2 || chon_bai > 5);
    switch (chon_bai)
    {
    case 2:
        printf("Ban vua chon cau 2\n");
        printf("Nhap n: ");
        scanf("%d", &n);
        printf("Cac so chinh phuong nho hon %d la: ", n);
        Liet_Ke_So_Chinh_Phuong_Nho_Hon_n(n);
        break;
    case 3:
        printf("Ban vua chon cau 3\n");
        do
        {
            printf("Nhap n so chinh phuong dau tien: ");
            scanf("%d", &b);
            if (b <= 0)
            {
                printf("Khong hop le. Nhap lai! \n");
            }
        } while (b <= 0);
        Tong_n_So_Chinh_Phuong_Dau_Tien(b);
        break;
    }

    return 0;
}

bool Kiem_Tra_So_Chinh_Phuong(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (i * i == n)
        {
            return true;
        }
    }
    return false;
}

void Liet_Ke_So_Chinh_Phuong_Nho_Hon_n(int n)
{
    for (int i = 4; i <= n - 1; i++)
    {
        if (Kiem_Tra_So_Chinh_Phuong(i))
        {
            printf("%2d ", i);
        }
    }
}

void Tong_n_So_Chinh_Phuong_Dau_Tien(int b)
{
    int sum = 0, count = 1, i = 1;
    while(count <= b)
    {
        for (int j = 1; j <= Max; j++)
        {
            if (Kiem_Tra_So_Chinh_Phuong(j) == true)
            {
                printf("abc%2d ",j);
                count++;
            }
        } 
        
    }
    printf("Tong %d so chinh phuong dau tien la: %d", b, sum);
}