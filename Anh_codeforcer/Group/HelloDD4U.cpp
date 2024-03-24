#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);

    if(s == "Hello DD4U") {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
