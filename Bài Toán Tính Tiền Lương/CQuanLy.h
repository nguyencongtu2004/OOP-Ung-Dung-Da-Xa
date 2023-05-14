#pragma once
#include "CNhanVien.h"

class CQuanLy: public CNhanVien
{
protected:
	float HeSoChucVu;
	float Thuong;

public:
	void Nhap();
	void TinhLuong();
	void Xuat();
	float LayLuong();
	CNhanVien* TimKiem(string);
};