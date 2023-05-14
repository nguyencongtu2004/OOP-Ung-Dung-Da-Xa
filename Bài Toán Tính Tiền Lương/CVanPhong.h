#pragma once
#include "CNhanVien.h"

class CVanPhong: public CNhanVien
{
protected:
	int SoNgayLamViec;
	float TroCap;

public:
	void Nhap();
	void TinhLuong();
	void Xuat();
	void LayLuong();
	CNhanVien* TimKiem(string);
};