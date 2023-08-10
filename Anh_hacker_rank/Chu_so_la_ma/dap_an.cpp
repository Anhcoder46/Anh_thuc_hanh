#include <bits/stdc++.h>

using namespace std;

int getValue(char c) {
    switch(c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}

int solve(string s) {
    int result = 0;
    
    for (int i = 0; i < s.length(); i++) {
        int currentValue = getValue(s[i]);
        
        if (i < s.length() - 1) {
            int nextValue = getValue(s[i+1]);
            
            if (currentValue < nextValue) {
                result -= currentValue;
            } else {
                result += currentValue;
            }
        } else {
            result += currentValue;
        }
    }
    
    return result;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = solve(s);

    fout << result << "\n";

    fout.close();

    return 0;
}