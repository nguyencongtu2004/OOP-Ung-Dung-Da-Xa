#include "CDia.h"
#include "CThuMuc.h"
#include "CTapTin.h"

void CDia::Nhap()
{
	cout << "Nhap so thanh phan trong dia: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int loai;
		do
		{
			cout << "Nhap loai thanh phan trong dia thu " << i + 1 << " (0: Thu muc | 1: Tap tin): ";
			cin >> loai;
			switch (loai)
			{
			case 0:
				ds[i] = new CThuMuc;
				break;
			case 1:
				ds[i] = new CTapTin;
				break;
			}
		} while (loai != 0 && loai != 1);
		ds[i]->Nhap();
	}
}

void CDia::Xuat()
{
	cout << "\nO DIA NAY CO:" << endl;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}

float CDia::TinhDungLuong()
{
	float dungluong = 0;
	for (int i = 0; i < n; i++)
		dungluong += ds[i]->TinhDungLuong();
	return dungluong;
}

int CDia::DemTapTin()
{
	int sotaptin = 0;
	for (int i = 0; i < n; i++)
		sotaptin += ds[i]->SoTapTin();
	return sotaptin;
}

int CDia::DemThuMucCon()
{
	int sothumuccon = 0;
	for (int i = 0; i < n; i++)
		sothumuccon += ds[i]->SoThuMucCon();
	return sothumuccon;
}