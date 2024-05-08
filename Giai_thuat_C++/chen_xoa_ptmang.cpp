//Đề: Chèn, xóa phần tử trong mảng
//- Xóa tại vị trí thứ k
//- Tia bớt phần tử giống nhau, chỉ giữ lại 1 phần tử đại diện
#include<iostream>
using namespace std;
void nhap(int a[], int n){
	for(int i = 0; i < n; i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
void xuat(int a[], int n){
	for(int i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}
}
void xoaPhanTu(int a[], int &n, int k) {
    if (k < 0 || k >= n) {
        cout<<"Vi tri xoa khong hop le!";
        return;
    }
    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
}
void Xoa(int a[], int &n, int vitrixoa){
	for(int i = vitrixoa + 1;i < n; i++){
		a[i - 1] = a[i];
	}
	n--;
}
void tiaBotPhanTuGiong(int a[], int &n) {
    for(int i = 0; i < n - 1; i++){
    	for(int j = i + 1; j < n; j++){
    		if(a[i] == a[j]){
    			Xoa(a, n, j);
    			i--;
			}
		}
	}
}
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int a[n];
	nhap(a, n);
	int k;
	cout<<"Nhap vi tri can xoa: ";
	cin>>k;
	xoaPhanTu(a, n, k);
	cout<<"===MANG SAU KHI XOA A["<<k<<"]==="<<endl;;
	xuat(a, n);
	tiaBotPhanTuGiong(a, n);
	cout<<endl<<"===MANG SAU KHI XOA PHAN TU TRUNG==="<<endl;
	xuat(a, n);
	return 0;
}