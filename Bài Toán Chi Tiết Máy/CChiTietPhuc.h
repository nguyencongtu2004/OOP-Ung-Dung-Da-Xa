#pragma once
#include "CChiTiet.h"
#include "CChiTietDon.h"

class CChiTietPhuc: public CChiTiet
{
protected:
	int n;
	CChiTiet* ds[100];

public:
	void Nhap();
	void Xuat();
	float TinhTien();
	CChiTiet* TimKiem(long);
	int SoChiTietDon();
};