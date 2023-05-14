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
	os <<  d.Ngay << "/" << d.Thang << "/" << d.Nam;

	return os;
}