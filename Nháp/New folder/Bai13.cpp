#include <stdio.h>
#include<math.h>

int main()
{
	int n, sum = 0, x;
    printf("Nhap x: ");
	scanf("%d", &x);
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum += pow(x,i);
	}
	printf("%d", sum);
	
	return 0;
}