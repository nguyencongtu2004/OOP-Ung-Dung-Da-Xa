#pragma once
#include "CNhanVien.h"

class CSanXuat: public CNhanVien
{
protected:
	float SoSanPham;

public:
	void Nhap();
	void TinhLuong();
	void Xuat();
	float LayLuong();
	CNhanVien* TimKiem(string);
};