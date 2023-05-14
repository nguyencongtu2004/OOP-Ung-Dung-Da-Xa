#include "CNhanVien.h"
//Đây là lớp thuần ảo nên không định nghĩa hết tất cả phương thức

void CNhanVien::Nhap()
{
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, HoTen);
	cout << "Nhap ngay sinh:\n";
	cin >> NgaySinh;
	cout << "Nhap luong co ban: ";
	cin >> LuongCoBan;
}

void CNhanVien::Xuat()
{
	cout << "Ho ten: " << HoTen << endl;
	cout << "Ngay sinh: " << NgaySinh << endl;
	cout << "Luong co ban: " << setprecision(12) << LuongCoBan << endl;
}