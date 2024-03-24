#include <iostream>
#include <vector>
#include <map>

int main() {
    int n;
    std::cin >> n;
    std::map<int, int> freq;
    std::vector<int> a(n);
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
        freq[a[i]]++;
    }
    int maxFreq = 0;
    int value = -1;
    for(int i = 0; i < n; i++) {
        if(freq[a[i]] > maxFreq) {
            maxFreq = freq[a[i]];
            value = a[i];
        }
    }
    std::cout << value << " " << maxFreq << std::endl;
    return 0;
}
