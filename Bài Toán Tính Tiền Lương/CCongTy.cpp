#include "CCongTy.h"
//Nhét ba dòng dưới đây vào file CNhanVien thì bị lỗi. Tại sao nhỉ?
#include "CSanXuat.h"
#include "CVanPhong.h"
#include "CQuanLy.h"

void CCongTy::Nhap()
{
	cout << "Nhap so luong nhan vien trong cong ty: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int loai;
		do {
			cout << "\nNhap loai nha vien\n0: Nhan vien San xuat\n1: Nhan vien Van phong\n2: Nhan vien Quan Ly\n";
			cin >> loai;
		} 
		while (loai != 0 && loai != 1 && loai != 2);
		switch (loai)
		{
			case 0: ds[i] = new CSanXuat;
				break;
			case 1: ds[i] = new CVanPhong;
				break;
			case 2: ds[i] = new CQuanLy;
				break;
		}
		ds[i]->Nhap();
	}
}

void CCongTy::TinhLuong()
{
	for (int i = 0; i < n; i++)
		ds[i]->TinhLuong();
}

void CCongTy::Xuat()
{
	cout << "\n---------------------------------------";
	cout << "\nSo luong nhan vien: " << n << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhan vien thu " << i + 1 << ":\n";
		ds[i]->Xuat();
	}
}

float CCongTy::TongLuong()
{
	float tongluong = 0;
	for (int i = 0; i < n; i++)
		tongluong = tongluong + ds[i]->LayLuong();
	return tongluong;
}

CNhanVien* CCongTy::TimKiem(string ten)
{
	for (int i = 0; i < n; i++)
	{
		CNhanVien* kq = ds[i]->TimKiem(ten);
		if (kq != NULL)
			return kq;
	}
	return NULL;
}