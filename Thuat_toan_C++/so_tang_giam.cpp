#include <iostream>
#include <string>
#include <algorithm>

int findNumber(int n) {
    std::string number = std::to_string(n);
    
    // Kiểm tra nếu số n chỉ có một chữ số
    if (number.length() == 1) {
        return n;
    }
    
    int i = number.length() - 1;
    
    // Tìm vị trí i sao cho chữ số i nhỏ hơn chữ số i - 1
    while (i > 0 && number[i] <= number[i - 1]) {
        i--;
    }
    
    // Nếu không tìm thấy vị trí i tương ứng, số đầu vào đã là số tăng giảm nhỏ nhất
    if (i == 0) {
        return n;
    }
    
    // Tìm chữ số lớn nhất từ vị trí i đến cuối
    int j = number.length() - 1;
    while (number[j] <= number[i - 1]) {
        j--;
    }
    
    // Hoán đổi chữ số i - 1 và chữ số j
    std::swap(number[i - 1], number[j]);
    
    // Sắp xếp các chữ số từ vị trí i đến cuối theo thứ tự tăng dần
    std::sort(number.begin() + i, number.end());
    
    // Chuyển đổi số từ dạng chuỗi về dạng số nguyên và trả về kết quả
    return std::stoi(number);
}

int main() {
    int n = 565;
    int result = findNumber(n);
    std::cout << result << std::endl;
    
    return 0;
}