/*
	Danh sách đặc
*/
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
using namespace std;

struct sv {
	string ten;
	int tuoi;
};
typedef sv SinhVien;

void nhapMang(SinhVien ds[], int n) { // nhập mảng
	cout << "Nhap DS sinh vien" << endl;
	for(int i = 0; i < n; i++) {
		cout << "Nhap sv: " << i << endl;
		cin.ignore(1000, '\n');
		getline(cin, ds[i].ten);
		cin >> ds[i].tuoi;
	}
}

void inMang(SinhVien ds[], int n) {
	cout << endl <<"DANH SACH SINH VIEN" << endl;
	cout << setw(20) << left << "Ten" << setw(5) << left << "Tuoi" << endl;
	cout << setfill('-') << setw(25) << " " << endl;
	cout << setfill(' ');
	for(int i = 0; i < n; i++) {
		cout << setw(20) << left << ds[i].ten;
		cout << setw(5 ) << left << ds[i].tuoi;
		cout << endl;
	}
}
void sapXepMang(SinhVien ds[], int n){
	int i, j;
	for(i = 0; i < n; i++)
		for(j = i + 1; j < n - 1; j++)
			if(ds[i].tuoi > ds[j].tuoi)
				swap(ds[i], ds[j]);
}
int main() {
	int n = 0;
	cin >> n;
	SinhVien ds[n];
	nhapMang(ds, n);
	inMang(ds, n);
	sapXepMang(ds, n);
	inMang(ds, n);
	return 0;
}