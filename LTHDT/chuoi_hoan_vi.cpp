#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector < int > a(n);
        for(int i = 0; i < n; i++) {
            a[i] = i + 1;  // identity permutation
        }
        vector < vector < int >> chain(1, a);  // permutation chain
        int k = 1;  // permutation chain length
        while(true) {
            // generate next permutation
            for(int i = 1; i < n; i++) {
                vector < int > ai = a;
                swap(ai[i], ai[i - 1]);
                int fixedness = 0;
                for(int j = 0; j < n; j++) {
                    if (ai[j] == j+1) {
                        fixedness++;
                    }
                }
                if(fixedness < k) {  // ai has lower fixedness than previous permutations
                    a = ai;
                    k++;
                    chain.push_back(a);
                    break;
                }
            }
            if (k == n) {
                break;  // maximum length permutation chain reached
            }
        }
        cout << k << "\n";
        for (const auto& p : chain) {
            for(int i = 0; i < n; i++) {
                cout << p[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}