#include <stdio.h>
#include <math.h>
#define Max 100

void Liet_Ke_So_Chinh_Phuong_Nho_Hon_n(int n);
void Tong_n_So_Chinh_Phuong_Dau_Tien(int n);
void Nhap_Mang(int a[], int c);
void Xuat_Mang(int a[], int c);
void Dem_So_Nguyen_To(int a[], int c);
void Tong_So_Chinh_Phuong_Vitri_Le(int a[], int c);
void Dao_Nguoc_Mang(int a[], int c);

int main()
{
    int a[Max], n, chon_bai, b, c;
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
    default:
        printf("Ban vua chon cau 5\n");
        printf("Nhap kich thuoc mang: ");
        scanf("%d", &c);
        Nhap_Mang(a, c);
        Xuat_Mang(a, c);
        Dem_So_Nguyen_To(a, c);
        Tong_So_Chinh_Phuong_Vitri_Le(a, c);
        Dao_Nguoc_Mang(a, c);
    }

    return 0;
}

bool Kiem_Tra_So_Chinh_Phuong(int n)
{
    for (int i = 0; i <= n; i++)
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
    for (int i = 0; i < n; i++)
    {
        if (Kiem_Tra_So_Chinh_Phuong(i))
        {
            printf("%2d ", i);
        }
    }
}

void Tong_n_So_Chinh_Phuong_Dau_Tien(int b)
{
    int sum = 0, a;
    for (int i = 0; i < b; i++)
    {
        a = i * i;
        sum += a;
    }
    printf("Tong %d so chinh phuong dau tien la: %d", b, sum);
}

void Nhap_Mang(int a[], int c)
{
    for (int i = 0; i < c; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void Xuat_Mang(int a[], int c)
{
    printf("Cac phan tu cua mang ban vua nhap la: ");
    for (int i = 0; i < c; i++)
    {
        printf("%2d ", a[i]);
    }
}

bool Kiem_Tra_So_Nguyen_To(int c)
{
    if (c < 2)
    {
        return false;
    }
    for (int i = 2; i < c; i++)
    {
        if (c % i == 0)
        {
            return false;
        }
    }
    return true;
}

void Dem_So_Nguyen_To(int a[], int c)
{
    int count = 0;
    for (int i = 0; i < c; i++)
    {
        if (Kiem_Tra_So_Nguyen_To(i))
        {
            count++;
        }
    }
    printf("\nCac so nguyen to co trong mang la: %d", count);
}

void Tong_So_Chinh_Phuong_Vitri_Le(int a[], int c)
{
    int sum = 0;
    for (int i = 0; i < c; i++)
    {
        if (i % 2 != 0 && Kiem_Tra_So_Chinh_Phuong(a[i]))
        {
            sum += a[i];
        }
    }
    printf("\nTong so chinh phuong o vi tri le la: %d", sum);
}

void Dao_Nguoc_Mang(int a[], int c)
{
    printf("\nDao nguoc mang: ");
    for (int i = c - 1; i >= a[0]; i--)
    {
        printf("%2d ", a[i]);
    }
}

/*void Dao_Nguoc_Mang(int a[], int c)
{
    int temp;
    for (int i = 0; i < c; i++)
    {
        if (a[i] + 1 > a[i])
        {
            a[i] + 1 = temp;
            a[i] + 1 =
        }
        printf("%2d ", a[i]);
    }
}*/