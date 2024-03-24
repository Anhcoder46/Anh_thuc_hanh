#include<iostream>
using namespace std;

// in ra các số từ 500 đến 1000 mà chia hết cho 100 thì xuống dòng
int main() {
//	for (int i = 500; i <= 1000; i++) {
//		cout << i;
//		if(i % 100) {
//			cout << " ";
//		} else {
//			cout << endl;
//		}
//	} 
int i = 500;
	while (i <= 1000) {
		cout << i;
		if(i % 100) {
			cout << " ";
		} else {
			cout << endl;
		}
		i++;	
	}
}


//#include<iostream>
//using namespace std;
//
//int main() {
//    int n, tam, daoNguoc = 0;
//    cout << "Nhap so: ";
//    cin >> n;
//    tam = n;
//
//    while (tam != 0) {
//        int chuSo = tam % 10;
//        daoNguoc = daoNguoc * 10 + chuSo;
//        tam = tam / 10;
//    }
//
//    if (n == daoNguoc) {
//    	cout << n << " la so Palindrome.";
//	} else {
//    	cout << n << " khong phai la so Palindrome.";
//	}
//    return 0;
//}