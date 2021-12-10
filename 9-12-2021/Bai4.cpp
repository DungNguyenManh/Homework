#include <stdio.h>
#define max 100

void Nhap_mang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%2d",&a[i]);
    }
}

int Kiem_tra_songuyento(int a[], int n) // Kiểm tra số nguyên tố
{
    if(n < 2){
        return 0;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

void Xuat_mang_vitri_Songuyento(int a[], int n){
    for(int i = 0; i < n; i++){
        if(Kiem_tra_songuyento(a[i]) == 1){


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