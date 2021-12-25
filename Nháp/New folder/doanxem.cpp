#include <stdio.h>
#include<math.h>
#define Max 1000

int Nhap_So_Cau1(char c);
void Tim_Gia_Tri_So_Nguyen_k(int n);
int Nhap_So_Cau4();
void Xac_Dinh_Qui_Trong_Nam(int thang);
void Cac_So_Chinh_Phuong_Nho_Honk(int k);
int Nhap_So_Cau6();
void Nhap_Mang(int a[], int b);
void Xuat_Mang_Vua_Nhap(int a[], int b);
void Phan_Tu_Lon_Nhat_Trong_Mang(int a[], int b);

int main()
{
    int chonbai, n, thang, k, a[Max], b;
    printf("\t\t============= MENU =============");
    printf("\n2. Tim so nguyen duong k lon nhat sao cho S(k) < n");
    printf("\n3. KLiem tra so nguyen co giam dan sang phai hay khong ?");
    printf("\n4. Nhap thang cua 1 nam, cho biet thang cua qui may trong nam ?");
    printf("\n5. Liet ke cac so chinh phuong nho hon 200");
    printf("\n6. Viet mang nhap va xuat mang 1 chieu cac so nguyen");
    printf("\n0. Ket thuc !");
    printf("\n\n\t\t============= MENU =============");
    do
    {

        printf("\nMoi chon bai: ");
        scanf("%d", &chonbai);
        if (!(0 <= chonbai || chonbai <= 6))
        {
            printf("Khong hop le. Nhap lai!\n");
        }
    } while (!(0 <= chonbai || chonbai <= 6));
    switch (chonbai)
    {
    case 2:
        n = Nhap_So_Cau1('n');
        Tim_Gia_Tri_So_Nguyen_k(n);
        break;
    case 4:
        thang = Nhap_So_Cau4();
        Xac_Dinh_Qui_Trong_Nam(thang);
        break;
    case 5:
        printf("Moi nhap so: ");
        scanf("%d",&k);
        Cac_So_Chinh_Phuong_Nho_Honk(k);
        break;
    case 6:
        b = Nhap_So_Cau6(); 
        Nhap_Mang(a,b);
        Xuat_Mang_Vua_Nhap(a,b);
        Phan_Tu_Lon_Nhat_Trong_Mang(a,b);
        break;


    }

    return 0;
}

int Nhap_So_Cau1(char c)
{
    int n;
    printf("Nhap %c: ", c);
    scanf("%d", &n);
    return n;
}

void Tim_Gia_Tri_So_Nguyen_k(int n)
{
    int sum = 0, max = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        if (sum <= n)
        {
            if (i == 1)
            {
                printf("%d ", i);
            }
            else
            {
                printf("+ %d ", i);
            }
            if (i > max)
            {
                max = i;
            }
        }
    }
    printf("<= %d", n);
    printf("\nK lon nhat = %d", max);
}

int Nhap_So_Cau4()
{
    int k;
    printf("Nhap thang cua nam: ");
    scanf("%d", &k);
    return k;
}

void Xac_Dinh_Qui_Trong_Nam(int thang)
{
    switch (thang)
    {
    case 1:
    case 2:
    case 3:
        printf("Qui 1");
        break;
    case 4:
    case 5:
    case 6:
        printf("Qui 2");
        break;
    case 7:
    case 8:
    case 9:
        printf("Qui 3");
        break;
    case 10:
    case 11:
    case 12:
        printf("Qui 4");
        break;
    default:
        printf("Thang khong hop le. Nhap lai!\n");
    }
}

bool Kiem_Tra_So_Chinh_Phuong(int k)
{   
    if(sqrt(k) * sqrt(k) == k){
        return true;
    }else{
        return false;
    }

}
void Cac_So_Chinh_Phuong_Nho_Honk(int k)
{
    printf("Cac so chinh phuong nho hon %d la: ",k);
    for(int i = 0; i < k; i++ )
    {
        if(Kiem_Tra_So_Chinh_Phuong(i)){
            printf("%2d ",i);
        }
    }
}

int Nhap_So_Cau6()
{   
    int b;
    printf("Nhap kich thuoc mang: ");
    scanf("%d",&b);
    return b;
}

void Nhap_Mang(int a[], int b)  // Nhập mảng
{
    for (int i = 0; i < b; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void Xuat_Mang_Vua_Nhap(int a[], int b)  // Xuất mảng
{
    printf("Cac phan tu vua nhap la: ");
    for (int i = 0; i < b; i++)
    {
        printf("%2d ", a[i]);
    }
}

void Phan_Tu_Lon_Nhat_Trong_Mang(int a[], int b)  // Tìm vị trí phần tử lớn nhất trong mảng
{
    int max = 0;
    for(int i = 0; i < b; i++){
        if(max < a[i]){
            max = i;
        }
    }printf("\nVi tri phan tu lon nhat trong mang la: a[%d]",max);
}
