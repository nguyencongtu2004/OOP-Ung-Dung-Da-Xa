#pragma once
#include "CNhanVien.h"

class CCongTy
{
protected:
	int n;
	CNhanVien* ds[100];

public:
	void Nhap();
	void TinhLuong();
	void Xuat();
	float TongLuong();
	CNhanVien* TimKiem(string);
};