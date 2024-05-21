//Đề: Liệt kê các dãy nhị phân độ dài N
#include <iostream>
using namespace std;
int n;
int x[100];
void in(int x[]) {
    for (int i = 1; i <= n; i++) {
    	cout << x[i];
    	cout << endl;
	}
}
void deQuy(int i) {
    for (int j = 0; j <= 1; j++) {
        x[i] = j;
        if (i == n) {
        	in(x);
		} else {
			deQuy(i + 1);
		}
    }
}
int main() {
	cout << "Nhap n: ";
    cin >> n;
    deQuy(1);
}
