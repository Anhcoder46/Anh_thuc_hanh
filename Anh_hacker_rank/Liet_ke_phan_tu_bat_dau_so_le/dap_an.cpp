#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

bool isOdd(int num) {
    string numStr = to_string(num);
    int firstDigit = numStr[0] - '0';
    return (firstDigit % 2 != 0);
}

vector<int> getOddHeadNumbers(string s) {
    vector<int> result;
    stringstream ss(s);
    int num;
    while (ss >> num) {
        if (isOdd(num)) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    string s;
    getline(cin, s);
    vector<int> result = getOddHeadNumbers(s);
    if (result.empty()) {
        cout << "-1" << endl;
    } else {
        for (size_t i = 0; i < result.size(); i++) {
            cout << result[i];
            if (i != result.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}