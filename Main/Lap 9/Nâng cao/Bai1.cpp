#include <stdio.h>

#define Max 100

int Nhap_Kich_Thuoc_Mang();
void Nhap_Mang_Nhohon10_Lonbang50(int a[], int n);
void Xuat_Mang(int a[], int n);

int main()
{
    int a[Max], n = Nhap_Kich_Thuoc_Mang();
    Nhap_Mang_Nhohon10_Lonbang50(a, n);
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
//----------------------------------------------------------------- TOÀN DƯƠNG------------------------
/*void Nhap_Mang_Toan_Duong(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        do{
            printf("Nhap a[%d]: ",i);
            scanf("%d",&a[i]);
            if(!(a[i] > 0)){
                printf("Khong hop le. Nhap lai!\n");
            }
        }while(!( a[i] > 0));
    }
}*/
//-------------------------------------------------------------------------- TOÀN ÂM--------------------------
/*void Nhap_Mang_Toan_Am(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        do{
            printf("Nhap a[%d]: ",i);
            scanf("%d",&a[i]);
            if(!(a[i] < 0)){
                printf("Khong hop le. Nhap lai!\n");
            }
        }while(!( a[i] < 0));
    }
}*/
//------------------------------------------------------------------------ TOÀN CHẴN------------------------
/*void Nhap_Mang_Toan_Chan(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        do{
            printf("Nhap a[%d]: ",i);
            scanf("%d",&a[i]);
            if(!(a[i] % 2 == 0)){
                printf("Khong hop le. Nhap lai!\n");
            }
        }while(!( a[i] % 2 == 0));
    }
}*/
//-------------------------------------------------------------------- VỪA ÂM VỪA LẺ---------------------
/*void Nhap_Mang_Vua_Am_Vua_Le(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        do{
            printf("Nhap a[%d]: ",i);
            scanf("%d",&a[i]);
            if(!(a[i] < 0 && a[i] % 2 != 0)){
                printf("Khong hop le. Nhap lai!\n");
            }
        }while(!(a[i] < 0 && a[i] % 2 != 0));
    }
}*/
//---------------------------------------------------------------------- TỪ 50 ĐẾN 100--------------------------
/*void Nhap_Mang_From50_To100(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        do{
            printf("Nhap a[%d]: ",i);
            scanf("%d",&a[i]);
            if(!(50 <= a[i] && a[i] <= 100)){
                printf("Khong hop le. Nhap lai!\n");
            }
        }while(!(50 <= a[i] && a[i] <= 100));
    }
}*/
//--------------------------------------------------------------------- NHỎ HƠN 10 LỚN HƠN HAY BẰNG 50---------------
void Nhap_Mang_Nhohon10_Lonbang50(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        do
        {
            printf("Nhap a[%d]: ", i);
            scanf("%d", &a[i]);
            if (!(a[i] < 10 || a[i] >= 50))
            {
                printf("Khong hop le. Nhap lai!\n");
            }
        } while (!(a[i] < 10 || a[i] >= 50));
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