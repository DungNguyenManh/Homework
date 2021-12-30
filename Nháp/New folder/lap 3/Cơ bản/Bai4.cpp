#include <stdio.h>

int main()
{
    float a , b ;
    char c;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f",&b);
    printf("Nhap phep tinh: ");
    fflush (stdin); // xóa bộ nhớ đệm
    scanf("%c",&c);
    switch(c){
        case '+':
            printf("%.f + %.f = %.2f ", a, b, a + b);
            break;
        case '-':
            printf("%.f - %.f = %.2f ", a, b, a - b);
            break;
        case '*':
            printf("%.f * %.f = %.2f ", a, b, a * b);
            break;
        case '/':
            printf("%.f / %.f = %.2f ", a, b, a / b);
            break;
        default:
            printf("Ban nhap ko phai phep toan");
            
    }

    return 0;
}