#include<stdio.h>

int Nhap_Lieu_Cau_2(char c);

int main(){
    int chonbai, n;
    printf("\t\t============= MENU ============\n");
    printf("2. Liet ke so chinh phuong nho hon n\n");
    printf("3. Tinh tong n so chinh phuong dau tien\n");
    printf("5. Nhap mang 1 chieu va thuc hien yeu cau\n");
    printf("0. \t\t============= END ============\n");
    do{
    printf("Moi chon bai: ");
    scanf("%d",&chonbai);
    if(!(0 <= chonbai && chonbai <= 5)){
        printf("Khong hop le. Moi chon lai!\n");
    }
    }while(!(0 <= chonbai && chonbai <= 5));
    if(chonbai == 2){
        n = Nhap_Lieu_Cau_2('n');

    }



    return 0;
}

int Nhap_Lieu_Cau_2(char c){
    int n;
    printf("Nhap so nguyen duong %c: ",c);
    scanf("%d",&n);
    return n;
}

bool Kiem_Tra_So_Chinh_Phuong(int n)
{

}
