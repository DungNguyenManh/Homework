#include <stdio.h>
#define Pi 3.14
#define Max 1000

int Nhap_So_Cau2(char c);
void Dien_Tich_Day_Hinh_Tru(int r);
void Dien_Tich_Xung_Quanh_Hinh_Tru(int r, int h);
void The_Tich_Hinh_Tru(int r, int h);
void DTB_Rank(int diemkt, int diemgk, int diemck);
void Nhap_Mang(int a[], int n);
void Xuat_Mang_Vua_Nhap(int a[], int n);
void Phan_Tu_Lon_Nhat_Trong_Mang(int a[], int n);

void Vi_Tri_Nho_Nhat_Mang(int a[], int n);

int main()
{
    int bai, r, h;
    int diemkt, diemgk, diemck;
    int n, a[Max];
    void Menu();
    do
    {
        printf("Chon bai: ");
        scanf("%d", &bai);
        if (!(2 <= bai && bai <= 5))
        {
            printf("Khong hop le. Nhap lai!\n");
        }
    } while (!(2 <= bai && bai <= 5));
    switch (bai)
    {
    case 2:
        printf("\nBan vua chon bai 2: \n");
        r = Nhap_So_Cau2('r');
        h = Nhap_So_Cau2('h');
        Dien_Tich_Day_Hinh_Tru(r);
        Dien_Tich_Xung_Quanh_Hinh_Tru(r, h);
        The_Tich_Hinh_Tru(r, h);
        break;
    /*case 3:

        break;*/
    case 4:
        printf("\nBan vua chon bai 4: \n");
        do
        {
            printf("Nhap diem kiem tra: ");
            scanf("%d", &diemkt);
            if (!(0 <= diemkt && diemkt <= 10))
            {
                printf("Khong hop le. Nhap lai!\n");
            }
        } while (!(0 <= diemkt && diemkt <= 10));
        do
        {
            printf("Nhap diem giua ky: ");
            scanf("%d", &diemgk);
            if (!(0 <= diemgk && diemgk <= 10))
            {
                printf("Khong hop le. Nhap lai!\n");
            }
        } while (!(0 <= diemgk && diemgk <= 10));
        do
        {
            printf("Nhap diem cuoi ky: ");
            scanf("%d", &diemck);
            if (!(0 <= diemck && diemck <= 10))
            {
                printf("Khong hop le. Nhap lai!\n");
            }
        } while (!(0 <= diemck && diemck <= 10));
        printf("Diem Kt = %d\nDiem giua ky = %d\nDiem cuoi ky = %d\nHoc sinh dat: ", diemkt, diemgk, diemck);
        DTB_Rank(diemkt, diemgk, diemck);
        break;
    case 5:
        printf("\nBan vua chon bai 5: \n");
        printf("Nhap kich thuoc mang: ");
        scanf("%d", &n);
        Nhap_Mang(a, n);
        Xuat_Mang_Vua_Nhap(a, n);
        Vi_Tri_Nho_Nhat_Mang(a, n);
        Phan_Tu_Lon_Nhat_Trong_Mang(a,n);
    }

    return 0;
}

int Nhap_So_Cau2(char c) // Nhập bán kính và chiều cao
{
    int k;
    printf("Nhap '%c' hinh tru tron: ", c);
    scanf("%d", &k);
    return k;
}

void Dien_Tich_Day_Hinh_Tru(int r) // Diện tích đáy hình trụ tròn
{
    printf("Dien tich day hinh tru tron la: S = %.2f", Pi * r * r); // pi * r^2
}

void Dien_Tich_Xung_Quanh_Hinh_Tru(int r, int h) // Diện tích xung quanh của trụ tròn
{
    printf("\nDien tich xung quanh cua hinh tru la: Sxq = %.2f", 2 * Pi * r * h);
}

void The_Tich_Hinh_Tru(int r, int h) // Thể tích hình trụ tròn
{
    printf("\nThe tich hinh tru tron la: V = %.2f", Pi * r * r * h); // pi * r^2 * h
}

void DTB_Rank(int diemkt, int diemgk, int diemck) // Tính điểm trung bình và xếp hạng
{
    float diem_trung_binh = (diemkt + diemgk*2 + diemck*3) / 6;
    if (diem_trung_binh >= 9)
    {
        printf("Hang A");
    }
    else if (diem_trung_binh >= 7)
    {
        printf("Hang B");
    }
    else if (diem_trung_binh >= 5)
    {
        printf("Hang C");
    }
    else
    {
        printf("Hang F");
    }
}

void Nhap_Mang(int a[], int n)  // Nhập mảng
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void Xuat_Mang_Vua_Nhap(int a[], int n)  // Xuất mảng
{
    printf("Cac phan tu vua nhap la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}

void Vi_Tri_Nho_Nhat_Mang(int a[], int n)  // Vị trí phần tử nhỏ nhất trong mảng
{
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < a[0])
        {
            min = i;
        }
    }
    printf("\nvi tri phan tu nho nhat la: a[%d]", min);
}

void Phan_Tu_Lon_Nhat_Trong_Mang(int a[], int n)  // Tìm phần tử lớn nhất trong mảng
{
    int max = 1;
    for(int i = n; i > 0; i--){
        if(a[i] % 2 != 0 && max < a[i]){
            max = i;
        }
    }printf("\nPhan tu lon nhat trong mang la: %d",max);
}
