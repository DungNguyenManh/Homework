#include <stdio.h>

int main()
{
    int n, x, a[100];
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nMang vua tao la: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", a[i]);
    }
    printf("Nhap x: ");
    scanf("%d", &x);
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            printf("Vi tri phan tu dau tien co gia tri bang %d la: vi tri a[%d]", x, i);
            break;
        }
    }


    return 0;
}