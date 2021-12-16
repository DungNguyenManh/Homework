#include <stdio.h>

int main()
{
    float a , b ;
    char c;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap phep tinh: ");
    scanf("%c",&c);
    printf("Nhap b: ");
    scanf("%f",&b);
    
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