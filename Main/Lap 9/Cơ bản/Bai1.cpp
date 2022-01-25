#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Max 100
#define Min 0

void Chuong_Trinh();
void Chon_Cau(int &choncau);
int Cau_1();
void Cau_2(int a[], int n);
void Cau_3(int a[], int n);
void Cau_5(int a[], int n);
void Cau_6(int a[], int n);

int main(){

    Chuong_Trinh();


    return 0;
}

void Menu()
{
    printf("\n\n\t\t-------------- Menu --------------");
    printf("\n\t1. Cau 1");
    printf("\n\t2. Cau 2");
    printf("\n\t3. Cau 3");
    printf("\n\t4. Cau 4");
    printf("\n\t5. Cau 5");
    printf("\n\t6. Cau 6");
    printf("\n\t7. Cau 7");
    printf("\n\t8. Ket thuc chuong trinh");
    printf("\n\t-------------------- End --------------------");
}

void Chuong_Trinh()
{
    int choncau, a[Max], n;
    srand((int) time(NULL)); 
    while(true)
    {
        Menu();
        Chon_Cau(choncau);
        switch(choncau)
        {
            case 1:
                n = Cau_1();
                break;
            case 2:
                Cau_2(a,n);
                break;
            case 3:
                Cau_3(a,n);
                break;
            case 5:
                Cau_5(a,n);
                break;
            case 6: 
                Cau_6(a,n);
                break;
            default :
                printf("\nKet thuc chuong trinh");
                return;
        }
    }   
}

void Chon_Cau(int &choncau)
{
    do{
        printf("\n\nChon cau: ");
        scanf("%d",&choncau);
        if(!(1 <= choncau && choncau <= 8)){
            printf("Khong hop le. Nhap lai!\n");
        }
    }while(!(1 <= choncau && choncau <= 8));
}

int Cau_1(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    if(!(0 < n && n <= 100)){
        return Cau_1();
    }else{
        return n;
    }
}

void Cau_2(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        a[i] = Min + rand() % (Max + 1 - Min);
    }
}

void Cau_3(int a[], int n)
{
    printf("Mang ngau nhien: ");
    for(int i = 0; i < n; i++){
        printf("%2d ",a[i]);
    }
}

void Cau_5(int a[], int n)
{
    printf("Cac phan tu le trong mang la: ");
    for(int i = 0; i < n; i++){
        if(a[i] % 2 != 0){
            printf("%2d ",a[i]);
        }
    }
}

void Cau_6(int a[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum+=a[i];
    }
    printf("Tong cac phan tu trong mang la: %d",sum);
}

