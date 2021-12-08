#include<iostream>
using namespace std;

// hàm nhập mảng
void Nhap_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "] = ";
		cin >> a[i]; // nhập giá trị từ bàn phím cho phần tử a[i]
	}
}

// hàm xuất mảng
void Xuat_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}

// hàm kiểm tra số đối xứng
bool Kiem_Tra_So_Doi_Xung(int n)
{
	// Bước 1: đảo ngược giá trị n
	int S = 0; // kết quả số đối xứng
	int temp = n;
	while (n != 0)
	{
		S = S * 10 + (n % 10); // công thức đảo ngược 1 số nguyên bất kì
		n = n / 10;
	}
	
	// Bước 2: Kiểm tra xem số đối xứng có bằng số ban đầu hay không
	if (S == temp)
	{
		return true;
	}
	return false;
}

// hàm tìm kiếm giá trị là số đối xứng đầu tiên trong mảng
int Tim_So_Doi_Xung_Dau_Tien(int a[], int n)
{
	int Kiem_Tra = 0; // nếu trong mảng không tồn tại số nào là số đối xứng thì trả về 0
	for (int i = 0; i < n; i++)
	{
		if(Kiem_Tra_So_Doi_Xung(a[i]) == true)
		{
			Kiem_Tra = a[i]; // a[i] chính là số đối xứng đầu tiên trong mảng
			break; // thoát ra khỏi vòng lặp hiện tại
		}
	}
	return Kiem_Tra;
}

int main()
{
	int a[100]; // khai báo mảng chứa 100 phần tử
	int n; // số lượng phần tử của mảng
	do
	{
		cout << "\nNhap so luong phan tu cua mang: ";
		cin >> n;
		if (n <= 0 || n > 100)
		{
			cout << "\nSo luong phan tu mang khong hop le. Xin kiem tra lai";
		}
	} while (n <= 0 || n > 100);

	cout << "\n\n\t\t NHAP MANG\n";
	Nhap_Mang(a, n);
	cout << "\n\n\t\t XUAT MANG\n";
	Xuat_Mang(a, n);


	cout <<  "\nGia tri: " << Tim_So_Doi_Xung_Dau_Tien(a, n);
	system("pause");
	return 0;
}