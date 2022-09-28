#include<stdio.h>

void NhapLieu(int &k);
int Dao_Nguoc(int k);
void CachDoc(int k);

int main()
{
    int k;  
    NhapLieu(k);
    CachDoc(k);


    return 0;
}

void NhapLieu(int &k)
{
    do
    {
        printf("Nhap tham so k: ");
        scanf("%d", &k);
        if(!(-999 <= k && k <= 999))
            printf("Nhap lai!\n");
    }while(!(-999 <= k && k <= 999));
}

int Dao_Nguoc(int k)
{
    int temp = k, daonguoc = 0;
    while(temp > 0)
    {
        daonguoc = daonguoc * 10 + (temp % 10);
        temp /= 10;
    }
    return daonguoc;
}

void CachDoc(int k)
{
    int variable;
    int daonguoc = Dao_Nguoc(k);
    while(daonguoc > 0)
    {
        variable = daonguoc % 10;
        for(int i = 1; i <= variable; i++)
        {
            printf("x ");
        }
        printf("\n");
        daonguoc /= 10;
    }
}