 #include <stdio.h>
#define Max 100

void Nhap_mang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void Xuat_mang_vitri_le(int a[], int n) // Liệt kê các phần tử nằm ở vị trí lẻ
{
    printf("Cac phan tu nam o vi tri le la: ");
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1)
        {
            printf("%2d ", a[i]);
        }
    }
}

void Xuat_mang_vitri_chan(int a[], int n) // Liệt kê các phần tử nằm ở vị trí chẵn
{
    printf("\nCac phan tu nam o vi tri chan la: ");
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%2d", a[i]);
        }
    }
}

int main()
{
    int n, a[Max];
    printf("Nhap vao kich thuoc mang: ");
    scanf("%d", &n);
    Nhap_mang(a, n);
    Xuat_mang_vitri_le(a, n);
    Xuat_mang_vitri_chan(a, n);

    return 0;
}