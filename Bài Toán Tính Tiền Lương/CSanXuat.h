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
	void LayLuong();
	CNhanVien* TimKiem(string);
};