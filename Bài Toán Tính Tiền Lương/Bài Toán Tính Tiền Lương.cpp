#include "CCongTy.h"

int main()
{
	CCongTy HiepPhat;
	HiepPhat.Nhap();
	HiepPhat.TinhLuong();
	HiepPhat.Xuat();
	float tongluong = HiepPhat.TongLuong();
	cout << "\nTong luong cua nhan vien: " << tongluong;


	return 0;
}
