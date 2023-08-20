#include <bits/stdc++.h>
using namespace std;

int checkContain(string s1, string s2) {
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2 ? 1 : 0;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = checkContain(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}