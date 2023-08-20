#include <bits/stdc++.h>
using namespace std;

vector<int> solve(string s) {
    stringstream ss(s);
    vector<int> arr;
    int sum = 0, num;
    while (ss >> num) {
        sum += num;
        arr.push_back(sum);
    }
    return arr;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    vector<int> result = solve(s);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}