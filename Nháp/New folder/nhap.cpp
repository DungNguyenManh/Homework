#include<stdio.h>

int main(){
	int n, sum = 0;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(int i = 0; i <= n; i++){
		sum += (2*i+1);
	}	
	printf("%d",sum);
	return 0;
}