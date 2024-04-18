#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Biến để lưu trữ ảnh
  vector<vector<int>> img(40, vector<int>(40));

  // Nhập ảnh từ bàn phím
  for (int i = 0; i < 40; i++) {
    for (int j = 0; j < 40; j++) {
      cin >> img[i][j];
    }
  }

  // Tạo mảng để lưu trữ tần suất xuất hiện của các chữ số
  int count[10] = {0};

  // Duyệt qua từng điểm ảnh trong ảnh
  for (int i = 0; i < 40; i++) {
    for (int j = 0; j < 40; j++) {
      // Tăng tần suất xuất hiện của chữ số tương ứng với điểm ảnh
      count[img[i][j]]++;
    }
  }

  // Tìm chữ số có tần suất xuất hiện cao nhất
  int maxCount = 0;
  int digit = 0;
  for (int i = 0; i < 10; i++) {
    if (count[i] > maxCount) {
      maxCount = count[i];
      digit = i;
    }
  }

  // In ra kết quả
  cout << digit << endl;

  return 0;
}
