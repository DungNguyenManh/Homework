#include <stdio.h>

int main()
{
	float n, sum = 0;
	printf("Nhap n: ");
	scanf("%f", &n);
	for (float i = 1; i <= n; i++)
	{
		sum += 1/(2*i);
	}
	printf("%.2f", sum);
	
	return 0;
}