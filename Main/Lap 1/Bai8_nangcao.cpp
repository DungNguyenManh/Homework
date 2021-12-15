#include <stdio.h>
#include <math.h>

int main()
{
    float R;
    printf("Nhap so thuc R: ");
    scanf("%f", &R);
    printf("Tri tuyet doi cua %.f la: %.2f", R, abs(R));
    if (R < 0)
    {
        printf("\nVi %.f nho hon 0 nen khong co can bac hai", R);
    }
    else
    {
        printf("\nCan bac hai cua %.f la: %.2f", R, sqrt(R));
    }
    printf("\nSo doi cua %.f la: %.f", R, R * -1);

    return 0;
}