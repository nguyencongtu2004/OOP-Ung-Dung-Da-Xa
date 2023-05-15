#pragma once
#include "CMachDien.h"

class CNoiTiep: public CMachDien
{
protected:
	int n;
	CMachDien* ds[100];

public:
	void Nhap();
	void Xuat();
	float TinhDienTro();
};