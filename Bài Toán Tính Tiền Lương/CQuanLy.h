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
	void LayLuong();
	CNhanVien* TimKiem(string);
};