#include <stdio.h>
#include<math.h>

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

bool Check_Element_Number(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

bool Check_So_Chinh_Phuong(int n)
{
    if(sqrt(n) * sqrt(n) == n){
        return 1;
    }
    return 0;
}

void Nhap_Mang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        do
        {
            printf("Nhap a[%d]: ", i);
            scanf("%2d", &a[i]);
            if (!(Check_So_Chinh_Phuong(a[i])))
            {
                printf("Khong hop le. Nhap lai!\n");
            }
        } while (!(Check_So_Chinh_Phuong(a[i])));
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