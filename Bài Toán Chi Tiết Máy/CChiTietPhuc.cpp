#include "CChiTietPhuc.h"

void CChiTietPhuc::Nhap()
{
	cout << "Nhap ma so chi tiet: ";
	cin >> MaSo;
	cout << "Nhap so luong chi tiet thanh phan cua chi tiet phuc (co ma so "<< MaSo << "): ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int loai;
		do {
		cout << "Nhap loai chi tiet (0: Don | 1: Phuc): ";
		cin >> loai;
			if (loai == 0)
				ds[i] = new CChiTietDon;
			else if (loai == 1)
				ds[i] = new CChiTietPhuc;
		} 
		while (loai != 0 && loai != 1);
		ds[i]->Nhap();//thực hiện theo cơ chế đa xạ
		//không gọi phương thức Nhap() của lớp CCHiTiet mà gọi phương thức
		//Nhap() của lớp mà con trỏ ds[i] đang giữ  địa chỉ (CChiTietDon hoặc CChiTietPhuc)
	}
}

void CChiTietPhuc::Xuat()
{
	cout << "CHI TIET PHUC:" << endl;
	cout << "Ma so chi tiet: " << MaSo << endl;
	cout << "So luong chi tiet thanh phan: " << n << ", gom:" << endl;
	for (int i = 0; i < n; i++)
	{
		ds[i]->Xuat();//thực hiện theo cơ chế đa xạ
	}
}

float CChiTietPhuc::TinhTien()
{
	float tien = 0;
	for (int i = 0; i < n; i++)
	{
		tien = tien + ds[i]->TinhTien();//thực hiện theo cơ chế đa xạ
	}
	return tien;
}

CChiTiet* CChiTietPhuc::TimKiem(long ms)
{
	if (MaSo == ms)
		return this;
	for (int i = 0; i < n; i++)
	{
		CChiTiet* kq = ds[i]->TimKiem(ms);//thực hiện theo cơ chế đa xạ
		if (kq != NULL)
			return kq;
	}
	return NULL;
}

int CChiTietPhuc::SoChiTietDon()
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		dem = dem + ds[i]->SoChiTietDon();
	}
	return dem;
}