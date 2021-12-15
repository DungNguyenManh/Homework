#include<stdio.h>
#include<math.h>

int main(){
    int n, sum = 0, max = 0;
    printf("Nhap vao n: ");  
    scanf("%d",&n);
    if(n < 2){
        printf("khong phai so nguyen to");
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            printf("Khong phai so nguyen to");
        }
    }
    printf("so nguyen to");



    return 0;
}