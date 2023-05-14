#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "CNgay.h"
using namespace std;

class CNhanVien
{
protected:
	string HoTen;
	CNgay NgaySinh;
	float Luong;
	float LuongCoBan;

public:
	virtual void Nhap();
	virtual void TinhLuong() = 0;
	virtual void Xuat();
	virtual float LayLuong() = 0;
	virtual CNhanVien* TimKiem(string) = 0;
};