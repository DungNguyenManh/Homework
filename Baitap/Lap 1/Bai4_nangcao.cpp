#include <stdio.h>

int main()
{
    int F;
    printf("Nhap do F: ");
    scanf("%d", &F);
    printf("%d do F = %d do C ", F, (9 / 5) * (F - 32));

    return 0;
}