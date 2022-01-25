#include <stdio.h>

#define Max 100

int Nhap_Kich_Thuoc_Mang();
void Nhap_Mang(int a[], int n);
void Xuat_Mang(int a[], int n);

int main()
{
    int a[Max], n = Nhap_Kich_Thuoc_Mang();
    Nhap_Mang(a, n);
    Xuat_Mang(a, n);

    return 0;
}

int Nhap_Kich_Thuoc_Mang()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (!(0 < n && n <= 100))
    {
        return Nhap_Kich_Thuoc_Mang();
    }
    else
    {
        return n;
    }
}
//-------------------------------------------------- VỊ TRÍ CHẴN NHẬN SỐ CHẴN ---------------------------------
/*void Nhap_Mang(int a[], int n)
{
    int i = 0;
    while (i < n)
    {
        if (i % 2 == 0)
        {
            do
            {
                printf("Nhap a[%d]: ", i);
                scanf("%d", &a[i]);
                if (!(a[i] % 2 == 0))
                {
                    printf("Khong hop le. Nhap lai!\n");
                }
            } while (!(a[i] % 2 == 0));
        }
        else
        {
            do
            {
                printf("Nhap a[%d]: ", i);
                scanf("%d", &a[i]);
                if (!(a[i] % 2 != 0))
                {
                    printf("Khong hop le. Nhap lai!\n");
                }
            } while (!(a[i] % 2 != 0));
        }
        i++;
    }
}*/
//-------------------------------------------------- VỊ TRÍ LẺ NHẬN SỐ CHẴN ---------------------------------
void Nhap_Mang(int a[], int n)
{
    int i = 0;
    while (i < n)
    {
        if (i % 2 == 0)
        {
            do
            {
                printf("Nhap a[%d]: ", i);
                scanf("%d", &a[i]);
                if (!(a[i] % 2 != 0))
                {
                    printf("Khong hop le. Nhap lai!\n");
                }
            } while (!(a[i] % 2 != 0));
        }
        else
        {
            do
            {
                printf("Nhap a[%d]: ", i);
                scanf("%d", &a[i]);
                if (!(a[i] % 2 == 0))
                {
                    printf("Khong hop le. Nhap lai!\n");
                }
            } while (!(a[i] % 2 == 0));
        }
        i++;
    }
}

void Xuat_Mang(int a[], int n)
{
    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}