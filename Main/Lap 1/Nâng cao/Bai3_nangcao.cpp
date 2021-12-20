#include <stdio.h>

int main()
{
    int chieudai , chieurong;
    printf("Nhap chieu dai: ");
    scanf("%d", &chieudai);
    printf("Nhap chieu rong: ");
    scanf("%d", &chieurong);
    printf("Chu vi hinh chu nhat la: %d", (chieudai + chieurong) * 2);
    printf("\nDien tich hinh chu nhat la: %d", chieudai * chieurong);

    return 0;
}