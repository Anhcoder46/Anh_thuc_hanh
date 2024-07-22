#include <stdio.h>

int main() {
  int n; // Biến để lưu số nguyên dương n
  int soLonNhat; // Biến để lưu trữ chữ số lớn nhất

  // Nhập số n
  printf("Nhap so nguyen duong n: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("So n phai la so nguyen duong!");
    return 1; // Kết thúc chương trình nếu n không hợp lệ
  }

  // Khởi tạo biến soLonNhat bằng chữ số đầu tiên của n
  soLonNhat = n % 10;

  // Duyệt qua từng chữ số của n
  while (n > 0) {
    int soHienTai = n % 10; // Lấy chữ số hiện tại

    // So sánh chữ số hiện tại với soLonNhat
    if (soHienTai > soLonNhat) {
      soLonNhat = soHienTai; // Cập nhật soLonNhat nếu soHienTai lớn hơn
    }

    // Chia n cho 10 để lấy chữ số tiếp theo
    n /= 10;
  }

  // In ra chữ số lớn nhất
  printf("Chu so lon nhat la: %d", soLonNhat);

  return 0;
}
