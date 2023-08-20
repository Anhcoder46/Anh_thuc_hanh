#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int solve(int n) {
    int factorial = 1;
    for (int i = 2; i <= n; i++) {
        factorial *= i;
        while (factorial % 10 == 0) {
            factorial /= 10;
        }
        factorial %= 100000; // Giới hạn số lượng chữ số của factorial để tránh tràn số
    }
    return factorial % 10;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a_temp;
    getline(cin, a_temp);

    int a = stoi(ltrim(rtrim(a_temp)));

    int result = solve(a);

    fout << result << "\n";

    fout.close();

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
