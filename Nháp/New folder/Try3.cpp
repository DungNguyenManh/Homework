#include <stdio.h>
#include <math.h>
#define Max 1000

int Nhap_Lieu_Cau_2(char c);
void Liet_Ke_So_Chinh_Phuong_Nho_Hon_n(int n);
int Nhap_Lieu_Cau_3();
void Tinh_Tong_n_So_Chinh_Phuong_Dau_Tien(int k);
int Nhap_Kich_Thuong_Mang();
void Nhap_Mang(int a[], int mang);
void Xuat_Mang(int a[], int mang);
void Dem_So_Nguyen_To(int a[], int mang);
void Tinh_Tong_So_Chinh_Phuong_Vitrile(int a[], int mang);

int main()
{
    int chonbai, n, k, mang, a[Max];
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
        printf("Ban da chon bai 2: \n\n");
        n = Nhap_Lieu_Cau_2('n');
        Liet_Ke_So_Chinh_Phuong_Nho_Hon_n(n);
    }
    else if (chonbai == 3)
    {
        printf("Ban da chon bai 3: \n\n");
        k = Nhap_Lieu_Cau_3();
        Tinh_Tong_n_So_Chinh_Phuong_Dau_Tien(k);
    }
    else if (chonbai == 5)
    {
        printf("Ban da chon bai 5: \n");
        mang = Nhap_Kich_Thuong_Mang();
        Nhap_Mang(a, mang);
        Xuat_Mang(a, mang);
        Dem_So_Nguyen_To(a, mang);
        Tinh_Tong_So_Chinh_Phuong_Vitrile(a, mang);
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
    printf("\nTong %d so chinh phuong dau tien la: %2d ", k, sum);
}

int Nhap_Kich_Thuong_Mang()
{
    int mang;
    printf("\nNhap kich thuong mang: ");
    scanf("%d", &mang);
    return mang;
}

void Nhap_Mang(int a[], int mang)
{
    for (int i = 0; i < mang; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void Xuat_Mang(int a[], int mang)
{
    printf("\nCac phan tu vua nhap la: ");
    for (int i = 0; i < mang; i++)
    {
        printf("%2d ", a[i]);
    }
}

bool Kiem_Tra_So_Nguyen_To(int mang)
{
    if (mang < 2)
    {
        return 0;
    }
    for (int i = 2; i < mang; i++)
    {
        if (mang % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void Dem_So_Nguyen_To(int a[], int mang)
{
    int count = 1;
    for (int i = 0; i < mang; i++)
    {
        if (Kiem_Tra_So_Nguyen_To(i))
        {
            count++;
        }
    }
    printf("\nCo %d so nguyen to trong mang!", count);
}

void Tinh_Tong_So_Chinh_Phuong_Vitrile(int a[], int mang)
{
    int sum = 0;
    for (int i = 0; i < mang; i++)
    {
        if (a[i] * a[i] == mang && i % 2 != 0)
        {
            sum += (a[i] * a[i]);
        }
    }
    printf("\nTong so chinh phuong o vi tri le la: %d", sum);
}
