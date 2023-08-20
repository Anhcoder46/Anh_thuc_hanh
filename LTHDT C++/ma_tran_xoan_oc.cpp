#include<bits/stdc++.h>
using namespace std;
// Ma tr?n xo?n ?c
char a[200][200];
void printfspiral(char a[200][200], int rows, int cols) {
	int top = 0, left = 0;
	int bottom = rows - 1, right = cols - 1;
	while(top <= bottom && left <= right) {
		// in hang tu trai sang phai
		for(int i = left; i <= right; ++i) {
			cout << a[top][i] << "";
		}
		top++;
		// in cot tu tren xuong duoi
		for(int i = top; i <= bottom; ++i) {
				cout << a[i][right] << "";
		}
		right--;
		for(int i = right; i >= left; --i) {
				cout << a[bottom][i] << "";
		}
		bottom--;
	}
	if(left <= right) {
		for(int i = bottom; i >= top; --i) {
			cout << a[i][left] << "";
		}
		left++;
	}
}
int main() {
	int rows, cols;
	cout << "Nhap so hang: ";
	cin >> rows;
	cout << "Nhap so cot: ";
	cin >> cols;
	cout << "\nNhap ma tran: " << endl;
	for(int i = 0; i < rows; i++)
		for(int j = 0; j < cols; j++) {
			cin >> a[i][j];	
		}
		printfspiral(a, rows, cols);
}