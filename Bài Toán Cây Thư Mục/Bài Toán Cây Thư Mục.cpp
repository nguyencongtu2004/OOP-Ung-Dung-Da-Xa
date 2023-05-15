#include "CDia.h"

int main()
{
	CDia C;
	C.Nhap();
	C.Xuat();
	float dungluong = C.TinhDungLuong();
	cout << "\nDung luong cua o dia: " << dungluong << endl;
	float sotaptin = C.DemTapTin();
	cout << "So tap tin cua o dia: " << sotaptin << endl;
	float sothumuccon = C.DemThuMucCon();
	cout << "So thu muc con cua o dia: " << sothumuccon << endl;

	return 0;
}
