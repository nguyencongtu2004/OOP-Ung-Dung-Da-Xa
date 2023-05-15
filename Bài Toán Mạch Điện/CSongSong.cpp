#include "CNoiTiep.h"
#include "CSongSong.h"
#include "CDienTro.h"

void CSongSong::Nhap()
{
	cout << "Nhap so luong n = ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int loai;
		do {
			cout << "Nhap loai mach dien co trong mach song song (0: Noi tiep | 1: Song song | 2: Dien tro): ";
			cin >> loai;
			switch (loai)
			{
			case 0:
				ds[i] = new CNoiTiep;
				break;
			case 1:
				ds[i] = new CSongSong;
				break;
			case 2:
				ds[i] = new CDienTro;
				break;
			}
		} while (loai != 0 && loai != 1 && loai != 2);
		ds[i]->Nhap();
	}
}

void CSongSong::Xuat()
{
	cout << "MACH SONG SONG: " << endl;
	cout << "So luong mach dien thanh phan: " << n << endl;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}

float CSongSong::TinhDienTro()
{
	float dientro = 0;
	for (int i = 0; i < n; i++)
		dientro += 1/(ds[i]->TinhDienTro());
	return 1/dientro;
}