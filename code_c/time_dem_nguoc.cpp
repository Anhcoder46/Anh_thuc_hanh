#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    int count = 10;
    // count = 10 co the thay doi tuy y
    while (count >= 0)
    {
        cout << count << endl;
        count--;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    cout << "Thoi gian dem nguoc: " << endl;

    return 0;
}