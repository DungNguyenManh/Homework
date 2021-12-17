#include <stdio.h>

int main()
{
	float n, sum = 0;
	printf("Nhap n: ");
	scanf("%f", &n);
	for (float i = 0; i <= n; i++)
	{
		sum += 1/(2*i+1);
	}
	printf("%.2f", sum);
	
	return 0;
}