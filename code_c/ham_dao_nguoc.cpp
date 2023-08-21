 #include<iostream>
 #include<string>
 using namespace std;
 string Doc_so(int n) {
 	string kq[10] = {"Khong", "Mot", "Hai", "Ba", "Bon", "Nam", "Sau", "Bay", "Tam", "Chin"};
 	return kq[n];
 }
 void Dao_nguoc(int &n) {
 	int du(0), kq(0);
 	while(n != 0) {
 		du = n % 10;
 		kq = kq * 10 + du;
 		n = n / 10;
	 }
	 n = kq;
 }
 int main() {
 	int n(0), du(0);
 	cin >> n;
 	cout << n << endl;
 	Dao_nguoc(n);
 	cout << n << endl;
 	while(n != 0) {
 		du = n % 10;
	 }
 }