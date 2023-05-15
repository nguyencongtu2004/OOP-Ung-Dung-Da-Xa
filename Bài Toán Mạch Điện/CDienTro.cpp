#include "CDienTro.h"

void CDienTro::Nhap()
{
	cout << "Nhap ma so: ";
	cin >> MaSo;
	cout << "Nhap R: ";
	cin >> R;
}

void CDienTro::Xuat()
{
	cout << "Ma so: " << MaSo << endl;
	cout << "Dien tro R = " << R << endl;
}

float CDienTro::TinhDienTro()
{
	return R;
}