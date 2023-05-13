#include "CChiTietDon.h"

void CChiTietDon::Nhap()
{
	cout << "Nhap ma so chi tiet: ";
	cin >> MaSo;
	cout << "Nhap gia tien chi tiet: ";
	cin >> GiaTien;
}

void CChiTietDon::Xuat()
{
	cout << "CHI TIET DON:" << endl;
	cout << "Ma so chi tiet: " << MaSo << endl;
	cout << "Gia tien chi tiet: " << GiaTien << endl;
}

float CChiTietDon::TinhTien()
{
	return GiaTien;
}

CChiTiet* CChiTietDon::TimKiem(long ms)
{
	if (MaSo == ms)
		return this;
	else
		return NULL;
}
