#include <stdio.h>
int ThuTuCuaNgayTrongNam(int d, int m, int y);
int main()
{
    printf("Bai 3 nang cao lap 3\n");
    int d, m, y;
    printf("Nhap ngay: ");
    scanf("%d", &d);
    printf("Nhap thang: ");
    scanf("%d", &m);
    printf("Nhap nam: ");
    scanf("%d", &y);
    printf("Cau A: ngay %d/%d/%d la ngay thu %d trong nam.", d, m, y, ThuTuCuaNgayTrongNam(d, m, y));
    // thực hiện câu B
    printf("\nCau B: ngay %d/%d/%d la ngay ", d, m, y);
    if (m <= 2)
    {
        m += 12;
        y -= 1;
    }
    int A = d + (2 * m) + (3 * (m + 1) / 5) + y + (y / 4) - (y / 100) + (y / 400) + 2;
    switch (A % 7)
    {
    case 0:
        printf("Thu Bay");
        break;
    case 1:
        printf("Chu nhat");
        break;
    case 2:
        printf("Thu Hai");
        break;
    case 3:
        printf("Thu Ba");
        break;
    case 4:
        printf("Thu Tu");
    case 5:
        printf("Thu Nam");
        break;
    case 6:
        printf("Thu Sau");
        break;
    }

    return 0;
}
int ThuTuCuaNgayTrongNam(int d, int m, int y)
{
    int s, i;
    s = d; // S: Tong ngay
    // lan luot duyet qua cac thang de tinh tong so ngay
    for (i = 1; i < m; i++)
    {
        switch (i)
        {
        case 4:
        case 6:
        case 9:
        case 11:
            s += 30;
            break;

        case 2:
            s += 28 + ((y % 4 == 0 && y % 100) || (y % 400 == 0));
            break;
        default:
            s += 31;
        }
    }
    return s;
}