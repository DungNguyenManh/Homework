#include <stdio.h>

int Nhap_So(int &a, int &b);
bool Check(int a, int b);
void Count(int a, int b);

int main()
{
    int a, b;
    Nhap_So(a, b);
    Check(a,b);
    Count(a,b);

    return 0;
}

int Nhap_So(int &a, int &b)
{
    do
    {
        printf("Nhap a: ");
        scanf("%d", &a);
        printf("Nhap b: ");
        scanf("%d", &b);
        if (!Check(a, b))
        {
            printf("nhap lai! \n");
        }

    } while (!Check(a, b));
    printf("Hop le!\n");
}

bool Check(int a, int b)
{
    int tich = a * b;
    int temp1 = a, temp2 = b;
    if (temp1 > temp2)
    {
        temp1 -= temp2;
    }
    else
    {
        temp2 -= temp1;
    }
    for (int i = 0; i <= tich; i++)
    {
        if (i * 5 == temp2)
        {
            return 1;
        }
    }
}

void Count(int a, int b)
{
    int count = 0;
    for(int i = a; i <= b; i++){
        if(i % 3 == 0){
            count++;
        }
    }
    printf("Trong khoang [%d,%d] co %d chia chan cho 3",a,b,count);

}
