#include "CQuanLy.h"

void CQuanLy::Nhap()
{
	CNhanVien::Nhap();
	cout << "Nhap he so chuc vu: ";
	cin >> HeSoChucVu;
	cout << "Nhap tien thuong: ";
	cin >> Thuong;
}

void CQuanLy::TinhLuong()
{
	Luong = LuongCoBan * HeSoChucVu + Thuong;
}

void CQuanLy::Xuat()
{
	CNhanVien::Xuat();
	cout << "He so chuc vu: " << HeSoChucVu << endl;
	cout << "Tien thuong: " << setprecision(12) << Thuong << endl;
	cout << "Luong: " << setprecision(12) << Luong << endl;
}

float CQuanLy::LayLuong()
{
	return Luong;
}

CNhanVien* CQuanLy::TimKiem(string ten)
{
	if (HoTen == ten)
		return this;
	return NULL;
}