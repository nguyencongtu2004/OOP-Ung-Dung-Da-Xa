#pragma once
#include "CLuuTru.h"

class CThuMuc: public CLuuTru
{
protected:
	int n;
	CLuuTru* ds[100];

public:
	void Nhap();
	void Xuat();
	float TinhDungLuong();
	int SoTapTin();
	int SoThuMucCon();
};

