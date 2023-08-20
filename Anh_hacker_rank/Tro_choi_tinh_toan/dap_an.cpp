#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int solve(int k, int n) {
    vector<int> nums(n);

    // Ghi nhớ các số ban đầu
    for (int i = 0; i < n; i++) {
        nums[i] = i + 1;
    }

    // Thực hiện lượt ghi nhớ k lần
    for (int i = 0; i < k; i++) {
        vector<int> newNums(n);
        for (int j = 0; j < n; j++) {
            newNums[j] = nums[j] * nums[j];
        }
        nums = newNums;
    }

    // Tính toán tổng số đang ghi nhớ và chữ số hàng đơn vị của tổng đó
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int unitsDigit = sum % 10;

    return unitsDigit;
}

int main() {
    int k, n;
    cin >> k >> n;
    cin.ignore();

    int result = solve(k, n);

    cout << result << "\n";

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}