#pragma once
#include "CChiTiet.h"
#include "CChiTietPhuc.h"

class CChiTietDon: public CChiTiet
{
protected:
	float GiaTien;

public:
	void Nhap();
	void Xuat();
	float TinhTien();
	CChiTiet* TimKiem(long);
	int SoChiTietDon();
};