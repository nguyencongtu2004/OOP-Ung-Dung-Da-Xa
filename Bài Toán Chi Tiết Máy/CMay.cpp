#include "CMay.h"

void CMay::Nhap()
{
	cout << "Nhap so luong chi tiet thanh phan cua may: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int loai;
		do {
		cout << "Nhap loai chi tiet (0: Don | 1:Phuc): ";
		cin >> loai;
			if (loai == 0)
				ds[i] = new CChiTietDon;
			else if (loai == 1)
				ds[i] = new CChiTietPhuc;
		} while (loai != 0 && loai != 1);
		ds[i]->Nhap();//thực hiện theo cơ chế đa xạ
	}
}

void CMay::Xuat()
{
	cout << "So luong chi tiet thanh phan cua may: " << n << ", gom:" << endl;
	for (int i = 0; i < n; i++)
	{
		ds[i]->Xuat();//thực hiện theo cơ chế đa xạ
	}
}

float CMay::TinhTien()
{
	float tien = 0;
	for (int i = 0; i < n; i++)
	{
		tien = tien + ds[i]->TinhTien();//thực hiện theo cơ chế đa xạ
	}
	return tien;
}

CChiTiet* CMay::TimKiem(long ms)
{
	for (int i = 0; i < n; i++)
	{
		CChiTiet* kq = ds[i]->TimKiem(ms);//thực hiện theo cơ chế đa xạ
		if (kq != NULL)
			return kq;
	}
	return NULL;
}

int CMay::DemChiTietDon()
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		dem = dem + ds[i]->SoChiTietDon();
	}
	return dem;
}
