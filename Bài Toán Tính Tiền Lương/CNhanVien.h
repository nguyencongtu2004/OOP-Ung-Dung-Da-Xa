#pragma once
#include <iostream>
#include <string>
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
	void Nhap();
	void TinhLuong();
	void Xuat();
	void LayLuong();
	CNhanVien* TimKiem(string);
};