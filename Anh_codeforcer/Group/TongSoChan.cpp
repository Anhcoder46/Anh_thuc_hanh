#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = 0;
        while (n > 0) {
            int tam = n % 10;
            if (tam % 2 == 0) {
                sum += tam;
            }
            n /= 10;
        }
        cout << sum << endl;
    }
    return 0;
}