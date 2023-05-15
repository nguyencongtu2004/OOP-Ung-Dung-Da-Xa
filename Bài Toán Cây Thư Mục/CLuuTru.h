#pragma once
#include <string>
#include "CNgay.h"//trong đây chưa có khai báo CTapTin, CThuMuc

class CLuuTru//: public CDia (có kế thừa CDia méo đou =((((((( )
{
protected:
	string Ten;
	CNgay NgayLap;
	float DungLuong;

public:
	virtual void Nhap() = 0;
	virtual void Xuat() = 0;
	virtual float TinhDungLuong() = 0;
	virtual int SoTapTin() = 0;
	virtual int SoThuMucCon() = 0;
};

