#include <stdio.h>

int main()
{
    char a;
    int songuyen1, songuyen2;
    printf("Nhap vao 1 ky tu: ");
    scanf("%c", &a);
    songuyen1 = (int)a;
    if (songuyen1 >= 97 && songuyen1 <= 122)
    {
        songuyen1 -= 32;

        printf("Ky tu %c la ky tu thuong nen viet hoa la %c", a, (char)songuyen1);
    }
    else
    {
        printf("Ky tu %c co ma %d ", a, (int)a);
    }

    return 0;
}