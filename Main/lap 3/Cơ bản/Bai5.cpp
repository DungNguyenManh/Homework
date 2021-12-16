#include <stdio.h>

int main()
{
    printf("Chon cau dung\n");
    printf("Con cho di bang may chan ?\n");
    printf("A: 1\n");
    printf("B: 2\n");
    printf("C: 3\n");
    printf("D: 4\n");
    fflush(stdin);
    printf("Nhap cau tra loi: ");
    char a;

    scanf("%c", &a);
    switch (a)
    {
    case 'a':
    case 'b':
    case 'c':
        printf("Sai");
        break;
    case 'd':
        printf("Dung");
        break;
    default:
        printf("Ko hop le");
    }

    return 0;
}