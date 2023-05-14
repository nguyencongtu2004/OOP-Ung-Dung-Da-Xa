#include "CVanPhong.h"

void CVanPhong::Nhap()
{
	CNhanVien::Nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> SoNgayLamViec;
	cout << "Nhap tro cap: ";
	cin >> TroCap;
}

void CVanPhong::TinhLuong()
{
	Luong = LuongCoBan + SoNgayLamViec * 100000 + TroCap;
}

void CVanPhong::Xuat()
{
	CNhanVien::Xuat();
	cout << "So ngay lam viec: " << SoNgayLamViec << endl;
	cout << "So tro cap: "<< setprecision(12) << TroCap << endl;
	cout << "Luong: " << setprecision(12) << Luong << endl;
}

float CVanPhong::LayLuong()
{
	return Luong;
}

CNhanVien* CVanPhong::TimKiem(string ten)
{
	if (HoTen == ten)
		return this;
	return NULL;
}