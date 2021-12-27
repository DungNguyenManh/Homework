#include <stdio.h>

int main()
{
    int n, m;
    do
    {
        printf("Nhap n: ");scanf("%d",&n);printf("Nhap m: "); scanf("%d",&m);
        if (!(n < m))
        {
            printf("Nhap lai m: ");
            scanf("%d",&m);
        }
    } while (!(n < m));
    printf("Cac so le trong khoang [%d,%d] la: ",n,m);
    for(int i = n; i < m; i++){
        if(i % 2 != 0){
            printf("%2d ",i);
        }
    }
}
