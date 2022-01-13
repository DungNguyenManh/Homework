#include <stdio.h>

void Nhap_So(long long int &n);
// void Cach_Doc(int cachdoc);
//  int Dem_Soluong(int n);
void Doc_So(long long int n);

int main()
{
    int cachdoc;
    long long int n;
    Nhap_So(n);
    // Cach_Doc(cachdoc);
    //  Dem_Soluong(n);
    Doc_So(n);

    return 0;
}

void Nhap_So(long long int &n)
{
    printf("Nhap n: ");
    scanf("%lld", &n);
}

void Cach_Doc(int cachdoc)
{
    if (cachdoc == 0)
    {
        printf(" Khong ");
    }
    else if (cachdoc == 1)
    {
        printf(" Mot ");
    }
    else if (cachdoc == 2)
    {
        printf(" Hai ");
    }
    else if (cachdoc == 3)
    {
        printf(" Ba ");
    }
    else if (cachdoc == 4)
    {
        printf(" Bon ");
    }
    else if (cachdoc == 5)
    {
        printf(" Nam ");
    }
    else if (cachdoc == 6)
    {
        printf(" Sau ");
    }
    else if (cachdoc == 7)
    {
        printf(" Bay ");
    }
    else if (cachdoc == 8)
    {
        printf(" Tam ");
    }
    else
    {
        printf(" Chin ");
    }
}

int Dem_Soluong(long long int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

void Doc_So(long long int n)
{
    int temp = n;
    int sodao = 0;
    int soluong = Dem_Soluong(n);
    while (temp != 0)
    {
        sodao = sodao * 10 + (temp % 10);
        temp /= 10;
    }
    int sum = 0;
    while (sodao != 0)
    { // 7897654321
        Cach_Doc(sodao % 10);
        if (soluong == 10) // 1.234.567.897
        {
            printf(" ty ");
        }
        if (soluong == 9) // 234.567.897
        {
            printf(" tram ");
        }
        if (soluong == 8) // 34.567.897
        {
            printf(" muoi ");
        }
        if (soluong == 7) // 4.567.897
        {
            printf(" trieu ");
        }
        if (soluong == 6) // 567.897
        {
            printf(" tram ");
        }
        if (soluong == 5) // 67.897
        {
            printf(" muoi ");
        }
        if (soluong == 4)  // 7.897
        {
            printf(" ngan ");
        }
        if (soluong == 3) // 897
        {
            printf(" tram ");
        }
        if (soluong == 2) // 97
        {
            printf(" muoi ");
        }
        soluong--;
        sodao /= 10;
    }
}