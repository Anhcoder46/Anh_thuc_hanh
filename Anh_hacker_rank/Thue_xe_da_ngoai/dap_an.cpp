#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x, arr[5] = {0};
    for (int i = 0; i < n; ++i) {
        cin >> x;
        arr[x]++;
    }
    int ans = arr[4]; // Số taxi chở nhóm 4 người
    ans += arr[3]; // Số taxi chở nhóm 3 người
    arr[1] -= min(arr[1], arr[3]); // Trừ số người còn lại trong nhóm 1 sau khi đã ghép với nhóm 3
    ans += arr[2] / 2; // Số taxi chở nhóm 2 người (2 người/ngồi 1 taxi)
    arr[2] %= 2; // Số người còn lại sau khi đã ghép cặp
    if (arr[2] == 1) {
        ans++; // Nếu còn 1 người trong nhóm 2 thì cần thêm 1 taxi
        arr[1] -= min(arr[1], 2); // Trừ số người còn lại trong nhóm 1 sau khi đã ghép với nhóm 2
    }
    ans += ceil((double)(arr[1]) / 4); // Số taxi chở nhóm 1 người (4 người/ngồi 1 taxi)
    cout << ans << endl;
    return 0;
}