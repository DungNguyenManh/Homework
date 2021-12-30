#include <stdio.h>
int main()
{
    int kt, giuaky, cuoiky;
    float diemtrungbinh;
    do
    {
        printf("Nhap diem kiem tra: ");
        scanf("%d", &kt);
        if (kt < 0 || kt > 10)
        {
            printf("Nhap lai\n");
        }
    } while (kt < 0 || kt > 10);
    do
    {
        printf("Nhap diem giua ky: ");
        scanf("%d", &giuaky);
        if (giuaky < 0 || giuaky > 10)
        {
            printf("Nhap lai\n");
        }
    } while (giuaky < 0 || giuaky > 10);
    do
    {
        printf("Nhap diem cuoi ky: ");
        scanf("%d", &cuoiky);
        if (cuoiky < 0 || cuoiky > 10)
        {
            printf("Nhap lai\n");
        }
    } while (cuoiky < 0 || cuoiky > 10);
    diemtrungbinh = (kt + giuaky + cuoiky) / 3;
    if (diemtrungbinh >= 8)
    {
        printf("Diem A");
    }
    else if (diemtrungbinh >= 7)
    {
        printf("Diem B");
    }
    else if (diemtrungbinh >= 5)
    {
        printf("Diem C");
    }
    else
    {
        printf("Diem D");
    }

    return 0;
}