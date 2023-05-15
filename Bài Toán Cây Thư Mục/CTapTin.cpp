#include "CTapTin.h"

void CTapTin::Nhap()
{
	cout << "Nhap ten tap tin: ";
	cin.ignore();
	getline(cin, Ten);
	cout << "Nhap ngay tao lap tap tin:\n";
	cin >> NgayLap;
	cout << "Nhap dung luong tap tin: ";
	cin >> DungLuong;
}

void CTapTin::Xuat()
{
	cout << "\nTen tap tin: " << Ten << endl;
	cout << "	Ngay tao lap tap tin: " << NgayLap << endl;
	cout << "	Dung luong tap tin: " << DungLuong << endl;
}

float CTapTin::TinhDungLuong()
{
	return DungLuong;
}

int CTapTin::SoTapTin()
{
	return 1;
}

int CTapTin::SoThuMucCon()
{
	return 0;
}