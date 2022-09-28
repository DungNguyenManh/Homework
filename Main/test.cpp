#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int Nhap_n();
void Nhap_Mang(int t[], int r[], int n);
// void Xuat_Mang(int t[], int r[], int s[], int n);
void Giai(int t[], int r[], int s[], int n);

int main()
{
    int n = Nhap_n();
    int t[60000], r[60000], s[60000];
    Nhap_Mang(t, r, n);
    // Xuat_Mang(t,r,s,n);
    Giai(t, r, s, n);
}

int Nhap_n()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (!(n > 0));
    return n;
}

void Nhap_Mang(int t[], int r[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("Nhap t[%d]: ", i);
        scanf("%d", &t[i]);
    }

    for (int i = 1; i <= n - 1; i++)
    {
        printf("Nhap r[%d]: ", i);
        scanf("%d", &r[i]);
    }
}

/*void Xuat_Mang(int t[], int r[], int s[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("t[%d]: %d", i, t[i]);
    }
    printf("\n-------\n");
    for(int i = 0; i < n; i++)
    {
        printf("r[%d]: %d", i, r[i]);
    }
    printf("\n-------\n");
    for(int i = 0; i < n; i++)
    {
        printf("s[%d]: %d", i, s[i]);
    }
}*/

void Giai(int t[], int r[], int s[], int n)
{
    s[1] = t[1];
    for (int i = 2; i <= n; i++)
    {
        s[i] = min((s[i - 1] + t[i]), (s[i - 2] + r[i - 1]));
    }
    printf("%d", s[n]);
}