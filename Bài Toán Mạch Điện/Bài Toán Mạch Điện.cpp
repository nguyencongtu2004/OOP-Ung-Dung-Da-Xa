#pragma once
#include "CMachDien.h"
#include "CNoiTiep.h"
#include "CSongSong.h"
#include "CDienTro.h"


int main()
{
	CMachDien* a = NULL;
	int loai;
	cout << "Nhap loai mach dien co trong mach (0: Noi tiep | 1: Song song | 2: Dien tro): ";
	cin >> loai;
	switch (loai)
	{
	case 0:
		a = new CNoiTiep;
		break;
	case 1:
		a = new CSongSong;
		break;
	case 2:
		a = new CDienTro;
		break;
	}
	a->Nhap();
	cout << endl;
	a->Xuat();
	float dientro = a->TinhDienTro();
	cout << "\nDien tro cua mach dien: " << dientro;

	return 0;
}
