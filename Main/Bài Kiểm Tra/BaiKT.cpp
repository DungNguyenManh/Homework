#include <stdio.h>
#include <math.h>

#define Max 100

void Chuong_Trinh();
void Chon_Cau(int &choncau);

// ------------------------------------------------------- Câu 2 -------------------------------------------------------

void Cau2();
void Nhap_Kich_Thuoc_Mang_Cau2(int &n);
void Nhap_Mang_Cau2(int a[], int n);
void Xuat_Mang_Cau2(int a[], int n);
void Trung_Binh_Cong_Cau2(int a[], int n);

// ------------------------------------------------------- Câu 3 -------------------------------------------------------

void Cau_3();
void Nhap_Kich_Thuoc_Mang_Cau3(int &n);
void Nhap_Mang_Cau3(int a[], int n);
void Xuat_Mang_Cau3(int a[], int n);
void Trung_Binh_Cong_Cau3(int a[], int n);

// ------------------------------------------------------- Câu 4 -------------------------------------------------------

void Cau_4();
void Nhap_Kich_Thuoc_Mang_Cau4(int &n);
void Nhap_Mang_Cau4(int a[], int n);
void Xuat_Mang_Cau4(int a[], int n);
void Trung_Binh_Cong_Cau4(int a[], int n);

// ------------------------------------------------------- Câu 5 -------------------------------------------------------

void Cau_5();
void Nhap_Kich_Thuoc_Mang_Cau5(int &n);
void Nhap_Mang_Cau5(int a[], int n);
void Xuat_Mang_Cau5(int a[], int n);
void Trung_Binh_Cong_Cau5(int a[], int n);

int main()
{
    Chuong_Trinh();

    return 0;
}

// ------------------------------------------------------- Menu -------------------------------------------------------

void Menu()
{
    printf("\n\t\t----------------- Menu -----------------");
    printf("\n\t2. Bai 2");
    printf("\n\t3. Bai 3");
    printf("\n\t4. Bai 4");
    printf("\n\t5. Bai 5");
    printf("\n\t6. Ket thuc chuong trinh");
    printf("\n\t\t------------------ End -----------------");
}

// ------------------------------------------------------- Câu 2 -------------------------------------------------------

void Cau_2()
{
    int n, a[Max];
    printf("Ban da chon cau 2: \n\n");
    Nhap_Kich_Thuoc_Mang_Cau2(n);
    Nhap_Mang_Cau2(a, n);
    Xuat_Mang_Cau2(a, n);
    Trung_Binh_Cong_Cau2(a, n);
}

// ------------------------------------------------------- Nhập Mảng Câu 2 -------------------------------------------------------

void Nhap_Kich_Thuoc_Mang_Cau2(int &n)
{
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
}

void Nhap_Mang_Cau2(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

// ------------------------------------------------------- Xuất Mảng Câu 2 -------------------------------------------------------

void Xuat_Mang_Cau2(int a[], int n)
{
    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}

// ------------------------------------------------------- Trung Bình Cộng Câu 2 -------------------------------------------------------

void Trung_Binh_Cong_Cau2(int a[], int n)
{
    printf("\nCac phan tu le trong mang la: ");
    int count = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%2d ", a[i]);
            sum += a[i];
            count++;
        }
    }
    printf("\nTrung binh cong cua cac so le la: %d", sum / count);
}

// ------------------------------------------------------- Câu 3 -------------------------------------------------------

void Cau_3()
{
    int a[Max], n;
    printf("Ban da chon cau 3: \n\n");
    Nhap_Kich_Thuoc_Mang_Cau3(n);
    Nhap_Mang_Cau3(a, n);
    Xuat_Mang_Cau3(a, n);
    Trung_Binh_Cong_Cau3(a, n);
}

// ------------------------------------------------------- Nhập Kích Thước Mảng Câu 3 -------------------------------------------------------

void Nhap_Kich_Thuoc_Mang_Cau3(int &n)
{
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
}

// ------------------------------------------------------- Nhập Mảng Câu 3 -------------------------------------------------------

void Nhap_Mang_Cau3(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

// ------------------------------------------------------- Xuất Mảng Câu 3 -------------------------------------------------------

void Xuat_Mang_Cau3(int a[], int n)
{
    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}

// ------------------------------------------------------- Kiểm Tra Số Nguyên Tố -------------------------------------------------------

bool Check_Element_Number(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

// ------------------------------------------------------- Trung Bình Cộng Câu 3 -------------------------------------------------------

void Trung_Binh_Cong_Cau3(int a[], int n)
{
    printf("\nCac so nguyen to trong mang la: ");
    int count = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (Check_Element_Number(a[i]))
        {
            printf("%2d ", a[i]);
            sum += a[i];
            count++;
        }
    }
    printf("\nTrung binh cong cua cac so nguyen to la: %.2f", (float)sum / count);
}

// ------------------------------------------------------- Câu 4 -------------------------------------------------------

void Cau_4()
{
    int a[Max], n;
    printf("Ban da chon cau 4: \n\n");
    Nhap_Kich_Thuoc_Mang_Cau4(n);
    Nhap_Mang_Cau4(a, n);
    Xuat_Mang_Cau4(a, n);
    Trung_Binh_Cong_Cau4(a, n);
}

// ------------------------------------------------------- Nhập Kích Thước Mảng Câu 4 -------------------------------------------------------

void Nhap_Kich_Thuoc_Mang_Cau4(int &n)
{
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
}

// ------------------------------------------------------- Nhập Mảng Câu 4 -------------------------------------------------------

void Nhap_Mang_Cau4(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

// ------------------------------------------------------- Xuất Mảng Câu 4 -------------------------------------------------------

void Xuat_Mang_Cau4(int a[], int n)
{
    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}

// ------------------------------------------------------- Kiểm Tra Số Lượng -------------------------------------------------------

bool Check_So_Luong(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    if (count % 2 != 0)
    {
        return 1;
    }
    return 0;
}

// ------------------------------------------------------- Trung Bình Cộng  Câu 4 -------------------------------------------------------

void Trung_Binh_Cong_Cau4(int a[], int n)
{
    int count = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (Check_So_Luong(a[i]))
        {
            sum += a[i];
            count++;
        }
    }
    printf("\nTrung binh cong cua cac so co so luong chu so le la: %.2f", (float)sum / count);
}

// ------------------------------------------------------------ Câu 5 -------------------------------------------------------------------

void Cau_5()
{
    int a[Max], n;
    printf("Ban da chon cau 5: \n\n");
    Nhap_Kich_Thuoc_Mang_Cau5(n);
    Nhap_Mang_Cau5(a, n);
    Xuat_Mang_Cau5(a, n);
    Trung_Binh_Cong_Cau5(a, n);
}

// ------------------------------------------------------- Nhập Kích Thước Mảng Câu 5 -------------------------------------------------------

void Nhap_Kich_Thuoc_Mang_Cau5(int &n)
{
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
}

// ------------------------------------------------------- Nhập Mảng Câu 5 -------------------------------------------------------

void Nhap_Mang_Cau5(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

// ------------------------------------------------------- Xuất Mảng Câu 5 -------------------------------------------------------

void Xuat_Mang_Cau5(int a[], int n)
{
    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
}

// ------------------------------------------------------- Trung Bình Cộng Câu 5 -------------------------------------------------------

void Trung_Binh_Cong_Cau5(int a[], int n)
{
    int count = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (Check_Element_Number(a[i]) && i % 2 != 0)
        {
            sum += a[i];
            count++;
        }
    }
    printf("\nTrung binh cong cua cac so nguyen to o vi tri le la: %.2f", (float)sum / count);
}

// ---------------------------------------------------- Chương Trình ----------------------------------------------------

void Chuong_Trinh()
{
    int choncau;

    while (true)
    {
        Menu();
        Chon_Cau(choncau);
        switch (choncau)
        {
        case 2:
            Cau_2();
            break;
        case 3:
            Cau_3();
            break;
        case 4:
            Cau_4();
            break;
        case 5:
            Cau_5();
            break;
        default:
            printf("Ket thuc chuong trinh");
            return;
        }
    }
}

void Chon_Cau(int &choncau)
{
    do
    {
        printf("\nChon cau: ");
        scanf("%d", &choncau);
        if (!(2 <= choncau && choncau <= 6))
        {
            printf("Khong hop le. Nhap lai!\n");
        }
    } while (!(2 <= choncau && choncau <= 6));
}