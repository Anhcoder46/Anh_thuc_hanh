#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	cout << "Tran Duc Anh" << endl;
	cout << "Da Nang Architecture University" << endl << endl;
	cout << setw(5) << left << "ID";
	cout << setw(30) << left << "Name";
	cout << setw(20) << right << "Adress" << endl;
	cout << setfill('-');
	cout << setw(55) << "" << endl;
	//reset fill bang ky tu ' '
	cout << setfill(' ');
	//in thong tin theo format nhu tren
	cout << setw(5) << left << 1;
	cout << setw(30) << left << "Giang A Lu";
	cout << setw(20) << right << "05 Truong Chi Cuong" << endl;
	cout << setfill(' ');
	cout << setw(5) << left << 2;
	cout << setw(30) << left << "Ta Quang Thuong";
	cout << setw(20) << right << "05 Truong Chi Cuong" << endl;
	cout << setfill(' ');
	cout << setw(5) << left << 3;
	cout << setw(30) << left << "Luong Thanh Tung";
	cout << setw(20) << right << "05 Truong Chi Cuong" << endl;
	cout << setfill(' ');
	cout << setw(5) << left << 4;
	cout << setw(30) << left << "Bui Trong Nam";
	cout << setw(20) << right << "05 Truong Chi Cuong" << endl;
	cout << setfill(' ');
}