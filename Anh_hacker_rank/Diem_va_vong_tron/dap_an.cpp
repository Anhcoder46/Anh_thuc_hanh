#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    double r[5];
    for (int i = 0; i < 5; ++i) {
        cin >> r[i];
    }
    int x, y;
    double max_x = -1e9, min_x = 1e9, max_y = -1e9, min_y = 1e9;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        max_x = max(max_x, (double)x);
        min_x = min(min_x, (double)x);
        max_y = max(max_y, (double)y);
        min_y = min(min_y, (double)y);
    }
    double low = 0, high = sqrt((max_x - min_x) * (max_x - min_x) + (max_y - min_y) * (max_y - min_y));
    while (low <= high) {
        double mid = (low + high) / 2;
        bool ok = true;
        for (int i = 0; i < n; ++i) {
            cin >> x >> y;
            if (sqrt((x - max_x) * (x - max_x) + (y - max_y) * (y - max_y)) > mid) {
                ok = false;
            }
        }
        if (ok) {
            int count = 0;
            for (int i = 0; i < 5; i++) {
                if (r[i] <= mid) {
                    count++;
                }
            }
            cout << count << endl;
            return 0;
        } else {
            low = mid + 1;
        }
    }
    cout << 3 << endl;
    return 0;
}