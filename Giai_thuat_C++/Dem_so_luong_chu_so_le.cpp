#include<iostream>
using namespace std;
// Hãy đếm số lượng chữ số lẻ của số nguyên dương n
int demChuSoLe(int n){
	if(n < 10){
		return (n % 2 == 1) ? 1 : 0;
	}else{
		int soCuoi = n % 10;
		return ((soCuoi % 2 == 1) ? 1 : 0) + demChuSoLe(n / 10);
		//n = 1234
		//1234 >= 10  ==> soCuoi = 4 ==> soCuoi chẵn nên trả về 0 + demChuSoLe(123) => 0 + 2 = 2
		//123 >= 10  ==> soCuoi = 3 ==> soCuoi lẻ nên trả về 1 + demChuSoLe(12) => 1 + 1 = 2
		//12 >= 10  ==> soCuoi = 2 ==> soCuoi chẵn nên trả về 0 + demChuSoLe(1) => 0 + 1
		//1 < 10  ==> ktra lẻ nên trả về 1
	}
}
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"So "<<n<<" co "<<demChuSoLe(n)<<" chu  so le!";
	return 0;
}