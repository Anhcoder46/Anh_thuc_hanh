#include<iostream>
using namespace std;
// in ra tất cả chuỗi nhị phân có độ dài n, các chuỗi sắp xếp tăng dần theo thứ tự từ điển, sau mỗi chuỗi có đúng một dấu cách.
void dequy(int n, string s) {
    if(n == 0) {
        cout << s << " ";
        return;
    }
    dequy(n - 1, s + '0');
    dequy(n - 1, s + '1');
}

int main() {
	int n;
	cout << "Nhap so n: ";
	cin >> n;
	dequy(n, "");
}