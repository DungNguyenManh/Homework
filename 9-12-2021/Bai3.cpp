#include <stdio.h>
#define max 100

void Nhap_mang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%2d",&a[i]);
    }
}

void Liet_ke_mang_vitri_chan(int a[], int n) // Liệt kê phần tử có vị trí chẵn và nhỏ hơn 20
{
    printf("Cac phan tu co vi tri chan va nho hon 20 la: ");
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && a[i] < 20)
        {
            printf("%2d ", a[i]);
        }
    }
}

int main()
{
    int n, a[max];
    printf("Nhap vao kich thuoc mang: ");
    scanf("%d", &n);
    Nhap_mang(a, n);
    Liet_ke_mang_vitri_chan(a,n);

    return 0;
}