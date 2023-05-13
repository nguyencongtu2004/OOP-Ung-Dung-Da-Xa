#pragma once
#include "CChiTiet.h"
#include "CChiTietDon.h"
#include "CChiTietPhuc.h"

class CMay
{
protected:
	int n;
	CChiTiet* ds[100];

public:
	void Nhap();
	void Xuat();
	float TinhTien();
	CChiTiet* TimKiem(long);
	int DemChiTietDon();
};

