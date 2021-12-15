#include <stdio.h>

int main()
{
    char a;
    int songuyen;
    printf("Nhap vao 1 ky tu: ");
    scanf("%c", &a);

    if (a >= 'a' && a <= 'z')
    {
        songuyen = (int)a - 32;

        printf("Ky tu %c la ky tu thuong nen viet hoa la %c", a, (char)songuyen);
    }
    else
    {
        printf("Ky tu %c co ma %d ", a, (int)a);
    }

    return 0;
}