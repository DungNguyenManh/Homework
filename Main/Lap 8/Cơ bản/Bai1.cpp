#include <stdio.h>

void Chuongtrinh();

int main()
{
    Chuongtrinh();

    return 0;
}

void Menu()
{
    printf("---------- Menu ----------\n\n");
    printf("1.-Good Morning\n");
    printf("2.-Good Afternoon\n");
    printf("3.-Good Everning");
    printf("4.-Ket thuc chuong trinh\n");
    printf("          Ban chon (1-4):");
}
   
void Chuongtrinh()
{
    bool chon = true;
    int luachon;
    while (chon)
    {
        Menu();
        printf("\nMoi ban chon: ");
        scanf("%d", &luachon);
        switch (luachon)
        {
            case 1:
                printf("Good Morning\n");
                break;
            case 2:
                printf("Good Afternoon\n");
                break;
            case 3:
                printf("Good Everning\n");
                break;
            case 4:
                printf("Ket thuc chuong trinh");
                chon = false;
        }
    }
}