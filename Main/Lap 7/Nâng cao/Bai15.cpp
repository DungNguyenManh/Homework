#include<stdio.h> // Kiểm tra số nguyên tố cùng nhau

int Nhap_So(char c);
void Element_Together(int a, int b);

int main(){
    int a,b;
    a = Nhap_So('a');
    b = Nhap_So('b');
    Element_Together(a,b);



    return 0;
}

int Nhap_So(char c){
    int variable;
    printf("Nhap %c: ", c);
    scanf("%d",&variable);
    return variable;
}

bool Check_Element_Together(int a, int b)
{
    while(a != b){
        if(a > b){
            a-=b;
        }else{
            b-=a;
        }
    }if(b == 1 || a == 1){
        return 1;
    }else{
        return 0;
    }
}

void Element_Together(int a, int b){
    if(Check_Element_Together(a,b)){
        printf("La so nguyen to cung nhau");
    }  else{
        printf("Khong la so nguyen to cung nhau");
    }
}