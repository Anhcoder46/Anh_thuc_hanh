/* Trong một trong trò chơi đoán số, hệ thống sẽ tạo ngẫu nhiên một số nguyên từ 1 đến n. 
Việc của bạn cần đoán ra số đó là số nào:

Nếu bạn đoán trúng thì bạn chiến thắng, trò chơi kết thúc.
Nếu bạn đoán lớn hơn thì hệ thống sẽ thông báo là: "high" và yêu cầu bạn đoán số khác.
Nếu bạn đoán bé hơn thì hệ thống sẽ thông báo là: "low" và yêu cầu bạn đoán số khác.
Hải là một người kém may mắn. Cho số nguyên dương n (1 ≤ n ≤ 1015) 
hãy tìm và đưa ra số lần đoán ít nhất để Hải chắc chắn sẽ đoán trúng số của hệ thống.
Biết rằng Hải sẽ chọn cách đoán thông minh nhất có thể.

Ví dụ:

Test mẫu 1:
Input	Output
3	2
Với n = 3, thì gameGuessNumber(n) = 2.
Giải thích: Đầu tiên Hải số đoán số 2
Nếu hệ thống báo chính xác thì Hải đã chiến thắng với chỉ 1 lần đoán.
Nếu Hệ thống thông báo "hight" thì Hải chắc chắn số của hệ thống là 1 nên 
Hải sẽ đoán 1 và giành chiến thắng với 2 lượt đoán.
Nếu Hệ thống thông báo "low" thì Hải chắc chắn số của hệ thống là 3 nên 
Hải sẽ đoán 3 và giành chiến thắng với 2 lượt đoán.

Test mẫu 2:
Input	Output
5	3
Với n = 5, thì gameGuessNumber(n) = 3. */

#include<iostream>
using namespace std;

long long recursion(long long n) {
    return (n == 1) ? 1 : 1 + recursion(n / 2); // Toán tử 3 ngôi
}

int main() {
    long long n;
    cout << "Nhap so ngau nhien: ";
    cin >> n;
    cout << recursion(n);
    return 0;
}