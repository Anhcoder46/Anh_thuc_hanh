#include<iostream>
using namespace std;

void sapxep(int a[], int n) {
     for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            cout << "So 0 o vi tri thu " << i << endl;
        }
    }
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int a[n];
    for(int i = 0; i < n ; i++) {
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
    sapxep(a, n);
    return 0;
}