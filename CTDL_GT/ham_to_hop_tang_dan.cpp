#include<iostream>
using namespace std;
//Nhập vào hay số nguyên n và k (1 ≤ k ≤ n ≤ 9)
// Hãy đưa ra tất cả những tổ hợp chập k của n, các chuỗi sắp xếp theo thứ tự tăng dần, 
//sau một chuỗi có đúng một khoảng trắng.

void deQuy(int n, int j, int k, string s) {
    if(k == 0) {
        cout << s << " ";
    }
    else {
        for(int i = j; i <= n; i++) {
            deQuy(n, i + 1, k - 1, s + char(i + '0'));
        }
    }
}

int main() {
    int n, k;
    cout << "Nhap n: ";
    cout << "Nhap k: ";
    cin >> n >> k;
    deQuy(n, 1, k, "");
    return 0;
}

//int x[11];
//void printArray(int a[], int n){
//	for (int i = 1; i <= n; i++){
//		cout << a[i];
//	}
//	cout <<" ";
//}
//void dequy(int h, int k, int n){
//	for (int i = x[h-1] + 1; i <= n - (k-h); i++){
//		x[h] = i;
//		if (h == k) printArray(x, k);
//		else {
//			dequy(h+1, k, n);
//		}
//	}
//}
//int main(){
//	int n, k;
//	cin >> n >> k;
//	x[0] = 0;
//	dequy(1, k, n);
//}