#include <stdio.h>

int main()
{
	float n, sum = 0, T = 1;
	printf("Nhap n: ");
	scanf("%f", &n);
	for (float i = 1; i <= n; i++)
	{
		T += 2*i+1;
		sum += 1/T;
	}
	printf("%.2f", sum);

	return 0;
}