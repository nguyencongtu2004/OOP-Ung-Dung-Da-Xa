#include "CSanXuat.h"

void CSanXuat::Nhap()
{
	CNhanVien::Nhap();
	cout << "Nhap so san pham: ";
	cin >> SoSanPham;
}

void CSanXuat::TinhLuong()
{
	Luong = LuongCoBan + SoSanPham * 2000;
}

void CSanXuat::Xuat()
{
	CNhanVien::Xuat();
	cout << "So san pham: " << SoSanPham << endl;
	cout << "Luong: " << setprecision(12) << Luong << endl;
}

float CSanXuat::LayLuong()
{
	return Luong;
}

CNhanVien* CSanXuat::TimKiem(string ten)
{
	if (HoTen == ten)
		return this;
	return NULL;
}