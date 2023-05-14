#include "CNgay.h"

istream& operator >> (istream& is, CNgay& d)
{
	cout << "Nhap ngay: ";
	is >> d.Ngay;
	cout << "Nhap thang: ";
	is >> d.Thang;
	cout << "Nhap nam: ";
	is >> d.Nam;

	return is;
}

ostream& operator << (ostream& os, CNgay& d)
{
	os << "Ngay " << d.Ngay << " thang " << d.Thang << " nam " << d.Nam;

	return os;
}

CNgay::CNgay()
{
	Ngay = 1;
	Thang = 1;
	Nam = 1;

}

CNgay::CNgay(int ngay, int thang, int nam)
{
	Ngay = ngay;
	Thang = thang;
	Nam = nam;
}

CNgay::CNgay(const CNgay& d)
{
	Ngay = d.Ngay;
	Thang = d.Thang;
	Nam = d.Nam;
}

CNgay::~CNgay()
{
	return;
}
