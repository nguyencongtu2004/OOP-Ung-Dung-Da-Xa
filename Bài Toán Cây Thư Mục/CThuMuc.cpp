#include "CThuMuc.h"
#include "CTapTin.h"

void CThuMuc::Nhap()
{
	cout << "Nhap so thanh phan trong thu muc: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int loai;
		do 
		{
			cout << "Nhap loai thanh phan trong thu muc thu " << i + 1 << " (0: Thu muc | 1: Tap tin): ";
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

void CThuMuc::Xuat()
{
	cout << "\nTHU MUC:\n-------------------------" << endl;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
	cout << "\n-------------------------" << endl;
}

float CThuMuc::TinhDungLuong()
{
	float dungluong = 0;
	for (int i = 0; i < n; i++)
		dungluong += ds[i]->TinhDungLuong();
	return dungluong;
}

int CThuMuc::SoTapTin()
{
	int sotaptin = 0;
	for (int i = 0; i < n; i++)
		sotaptin += ds[i]->SoTapTin();
	return sotaptin;
}

int CThuMuc::SoThuMucCon()
{
	return 1;
}