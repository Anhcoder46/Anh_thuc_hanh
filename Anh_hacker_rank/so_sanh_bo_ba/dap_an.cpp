#include <iostream>
#include <vector>

std::vector<int> compareTriplets(std::vector<int> a, std::vector<int> b) {
    int aliceScore = 0;
    int bobScore = 0;

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            aliceScore++;
        } else if (a[i] < b[i]) {
            bobScore++;
        }
    }

    return {aliceScore, bobScore};
}

int main() {
    std::vector<int> a(3), b(3);

    for (int i = 0; i < 3; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < 3; i++) {
        std::cin >> b[i];
    }

    std::vector<int> result = compareTriplets(a, b);

    for (int i = 0; i < 2; i++) {
        std::cout << result[i] << " ";
    }

    return 0;
}