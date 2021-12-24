#include<stdio.h>

int main(){
    int n, sum = 0;
    do
    {
        printf("Nhap n: ");  scanf("%d",&n);
        if(n < 0){
            printf("Nhap lai\n");
        }
    }while(n < 0);
    for(int i = 1; i <= n/2; i++){
        sum += i;
        if(sum <= n){
            printf("%d + %d",i,i);
        }else{
            printf(" <= %d",n);
            break;
        }


    }

    return 0;
}