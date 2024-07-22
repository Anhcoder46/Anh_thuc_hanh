#include <stdio.h>

int main() {
  int n; // Biến để lưu số nguyên dương n
  int x; // Biến lưu số nguyên dương x (0 <= x <= 9)
  int count = 0; // Biến đếm số lần xuất hiện của x

  // Nhập số n và x
  printf("Nhap so nguyen duong n: ");
  scanf("%d", &n);
  printf("Nhap so nguyen duong x (0 <= x <= 9): ");
  scanf("%d", &x);

  if (n < 0 || x < 0 || x > 9) {
    printf("So n va x khong hop le!");
    return 1; // Kết thúc chương trình nếu n hoặc x không hợp lệ
  }

  // Duyệt qua từng chữ số của n
  while (n > 0) {
    int soHienTai = n % 10; // Lấy chữ số hiện tại

    // Kiểm tra nếu soHienTai bằng x
    if (soHienTai == x) {
      count++; // Tăng biến count
    }

    // Chia n cho 10 để lấy chữ số tiếp theo
    n /= 10;
  }

  // In ra kết quả
  if (count > 0) {
    printf("So %d xuat hien %d lan trong n\n", x, count);
  } else {
    printf("So %d khong xuat hien trong n\n", x);
  }

  return 0;
}
