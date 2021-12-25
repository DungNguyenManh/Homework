void Tinh_Tong_n_So_Chinh_Phuong_Dau_Tien(int k) //Tính Sum n số chính phương đầu tiên không dùng sqrt
{
    int sum = 0;
    for (int i = 0; i <= k - 1; i++)
    {
        sum += (i * i);
    }
    printf("\nTong %d so chinh phuong dau tien la: %2d ",k, sum);
}