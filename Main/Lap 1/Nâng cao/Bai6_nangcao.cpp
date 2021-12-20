#include <stdio.h>

int main()
{
    int chieudai, chieurong ;
    printf("Nhap chieu rong: ");
    scanf("%d", &chieurong);
    chieudai = chieurong * 1.5;
    printf("Chu vi hinh chu nhat la: %d", (chieudai + chieurong) * 2);
    printf("\nDien tich hinh chu nhat la: %d", chieudai * chieurong);

    return 0;
}