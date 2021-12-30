#include<stdio.h>

int main(){
    int n, sochan = 0, sole = 0, variable = 0;
    printf("Nhap n: ");
    scanf("%d",&n);
    int temp = n;
    while(temp > 0){
        variable = variable * 10 + (temp % 10);
        if(variable % 2 == 0){
            sochan++;
        }else{
            sole++;
        }
        temp /= 10;
    }
    printf("So luong chu so chan trong %d la: %d",n,sochan);
    printf("\nSo luong chu so le trong %d la: %d",n,sole);

    return 0;
}