#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int solve(int n, vector<int> numbers) {
    int maxNum = INT_MIN;
    int secondMaxNum = INT_MIN;
    int secondMaxIndex = -1;

    for (int i = 0; i < n; i++) {
        if (numbers[i] > maxNum) {
            secondMaxNum = maxNum;
            maxNum = numbers[i];
            secondMaxIndex = i;
        } else if (numbers[i] > secondMaxNum && numbers[i] < maxNum) {
            secondMaxNum = numbers[i];
            secondMaxIndex = i;
        }
    }
    return secondMaxIndex;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string numbers_temp_temp;
    getline(cin, numbers_temp_temp);

    vector<string> numbers_temp = split(rtrim(numbers_temp_temp));

    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        int numbers_item = stoi(numbers_temp[i]);

        numbers[i] = numbers_item;
    }

    int result = solve(n, numbers);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}