#include<stdio.h>

int Nhap_Tu_So();
int Nhap_Mau_So();
void Don_Gian_Phan_So(int tuso, int mauso);

int main(){
    int tuso = Nhap_Tu_So();
    int mauso = Nhap_Mau_So();
    Don_Gian_Phan_So(tuso,mauso);


    return 0;
}

int Nhap_Tu_So()
{
    int n;
    printf("Nhap tu so: ");
    scanf("%d",&n);

    return n;
}

int Nhap_Mau_So()
{
    int n;
    printf("Nhap mau so: ");
    scanf("%d",&n);

    return n;
}

void Don_Gian_Phan_So(int tuso, int mauso)
{
    printf("%d/%d don gian thanh: %.2f",tuso,mauso,1.0*tuso/mauso);
}