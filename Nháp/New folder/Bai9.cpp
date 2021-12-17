#include <stdio.h>

int main()
{
	int n, T = 1;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		T *= i;
	}
	printf("%d", T);
	
	return 0;
}