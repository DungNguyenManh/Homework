#include <stdio.h>
#include <math.h>
int main()
{
	int n, x=0, tong=0;
	printf("Nhap so nguyen duong: ");
	scanf("%d", &n);
	if (n > 0)
	{
		while (tong <= n)
		{
			++x;
			tong = tong + x;
			printf("%d  ", x);
			
			
		}
		printf("<=%d", n);
	}
	else
	{
		printf("Nhap sai, xin nhap lai.\n");
		printf("Nhap so nguyen duong: ");
		scanf("%d", &n);
	}
}