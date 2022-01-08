#include<stdio.h>

#define X 3
#define Y 1000

bool Check(int n);
void Trung_Binh_Cong();

int main(){
    Trung_Binh_Cong();



    return 0;
}

void Trung_Binh_Cong()
{
    int count = 0;
    int sum = 0;
    for(int i = X; i < Y; i++){
        if(Check(i)){
            count++;
            sum+=i;
        }
    }
    int tbc = sum/count;
    printf("Trung binh cong trong khoang [%d,%d] la: %d",X,Y,tbc);

}

bool Check(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}