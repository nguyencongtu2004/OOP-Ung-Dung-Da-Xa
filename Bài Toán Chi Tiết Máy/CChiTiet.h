#pragma once
#include <iostream>
using namespace std;

//đây là lớp trừu tượng (không thể tạo ra đối tượng từ lớp này)
class CChiTiet
{
protected:
	long MaSo;

public:
	//gán các phương thức bằng 0: khai báo phương thức thuần ảo (phương thức không có phần cài đặt)
	virtual void Nhap() = 0;
	virtual void Xuat() = 0;
	virtual float TinhTien() = 0;
	virtual CChiTiet* TimKiem(long) = 0;
};

