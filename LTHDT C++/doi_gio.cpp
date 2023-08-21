#include<iostream>
using namespace std;

int main() {
    int n, gio, phut, giay;
    cout << "Nhap so can doi: ";
    cin >> n;
    gio = n / 3600; // Chia cho 3600 để lấy số giờ
    n = n % 3600; // Lấy phần dư để tiếp tục tính phút và giây
    phut = n / 60; // Chia cho 60 để lấy số phút
    giay = n % 60; // Lấy phần dư để lấy số giây
    cout << gio << " Gio " << phut << " Phut " << giay << " Giay " << endl;
    return 0;
}