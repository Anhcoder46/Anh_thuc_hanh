#include<iostream>
using namespace std;

int main() {
    int n, tam, temp = 0;
    cout << "Nhap so can dao nguoc: ";
    cin >> n;
    
    int s = n; // Lưu giữ số ban đầu để tính hieu
    
    while (n != 0) {
        tam = n % 10;
        temp = temp * 10 + tam;
        n = n / 10;
    }
    
    cout << "So dao nguoc la: " << temp << endl;
    
    int hieu = s - temp;
    cout << "Hieu cua so dao nguoc: " << hieu << endl;
    
    if (hieu == 0) {
        cout << "Day la so doi xung.";
    } else {
        cout << "Khong phai so doi xung.";
    }
    
    return 0;
}