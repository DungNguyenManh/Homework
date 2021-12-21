#include <stdio.h>

int main()
{
    int a, d, e;
    float b;
    char c;
    printf("Cau A\n");
    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("So nguyen ban vua nhap la: %d\n", a);

    printf("\nCau B\n");
    printf("Nhap so thuc b: ");
    scanf("%f", &b);
    printf("So thuc ban vua nhap la: %.2f\n", b);

    printf("\nCau C\n");
    printf("Nhap ky tu c: ");
    fflush(stdin);
    scanf("%c", &c);
    printf("Ky tu ban vua nhap la: %c\n", c);

    printf("\nCau D\n");
    printf("Nhap so nguyen d: ");
    scanf("%d", &d);
    printf("Nhap so nguyen e: ");
    scanf("%d", &e);
    printf("%d + %d = %d\n", d, e, d + e);
    printf("%d - %d = %d\n", d, e, d - e);
    printf("%d * %d = %d\n", d, e, d * e);
    printf("%d / %d = %d", d, e, d / e);

    return 0;
}