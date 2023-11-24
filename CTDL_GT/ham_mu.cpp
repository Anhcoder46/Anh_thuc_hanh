#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
long long mu(int n) {
	if(n == 1) {
		return 1;
	}
	else {
		return mu(n - 1) + pow(n, 2);
	}
}
int main() {
	int n = 0;
	cin >> n;
	cout << mu(n) << setw(4);
	return 0;
}


// Nhập và hai tự nhiên a và b. Hãy tính giá trị của ab
// Ta thấy: ab = a * ab-1, và a0 = 1.

//long long dequy(int a, int b) {
//    if (b == 0) return 1;
//    return a * dequy(a, b-1);
//}
//int main(){
//    int a, b;
//    cin >> a >> b;
//    cout << dequy(a, b);
//    return 0;
//}