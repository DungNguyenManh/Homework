#include <stdio.h>

int main()
{
    int n, sum = 0, i = 0;
    while (n > 0)
    {
        i++;
        printf("Nhap vao so nguyen %d: ",i);
        scanf("%d",&n);
        sum += n;
    }
    printf("%d",sum);

    return 0;
}   
