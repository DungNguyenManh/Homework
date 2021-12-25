void Liet_Ke_So_Chinh_Phuong_Nho_Hon_n(int n)  //Liệt kê số chính phương nhỏ hơn n không dùng sqrt
{
    printf("Cac so chinh phuong nho hon %d la: ", n);
    for (int i = 0; i < n; i++)
    {
        if (i * i < n)
        {
            printf("%2d ", i * i);
        }
    }
}