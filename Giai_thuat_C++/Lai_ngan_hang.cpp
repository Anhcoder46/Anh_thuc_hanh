#include<iostream>
using namespace std;
//Gửi ngân hàng 1000USD lãi suất 12% năm. Số tiền có được sau 30 năm là bao nhiêu

double tien(double tienGoc, double laiSuat, int nam) {
	if(nam == 0) {
		return tienGoc;
	} else {
		double laiSuatHienTai = tienGoc * laiSuat / 100;
		return tien(tienGoc + laiSuatHienTai, laiSuat, nam - 1);
	}
}

int main() {
  double tienGoc = 1000;
  double laiSuat = 12;
  int soNam = 30;
  double soTienSau30Nam = tien(tienGoc, laiSuat, soNam);
  cout << "So tien co duoc sau 30 nam la: " << soTienSau30Nam << " USD" << endl;

  return 0;
}