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
	float LayLuong();
	CNhanVien* TimKiem(string);
};