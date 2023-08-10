#include <bits/stdc++.h>

using namespace std;

string solve(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty() ||
                (c == ')' && st.top() != '(') ||
                (c == '}' && st.top() != '{') ||
                (c == ']' && st.top() != '[')) {
                return "False";
            }
            st.pop();
        }
    }
    return st.empty() ? "True" : "False";
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = solve(s);

    fout << result << "\n";

    fout.close();

    return 0;
}