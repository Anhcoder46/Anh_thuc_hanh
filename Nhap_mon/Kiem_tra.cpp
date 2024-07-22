#include <stdio.h>

int main() {
  int n; // Biến để lưu số nguyên dương n
  int soDaoNguoc = 0; // Biến lưu số đảo ngược của n
  int temp = n; // Biến tạm thời để lưu giá trị ban đầu của n

  // Nhập số n
  printf("Nhap so nguyen duong n: ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("So n phai la so nguyen duong!");
    return 1; // Kết thúc chương trình nếu n không hợp lệ
  }

  // Kiểm tra số toàn chẵn
  int countSoChan = 0;
  while (n > 0) {
    int soHienTai = n % 10;
    if (soHienTai % 2 == 0) {
      countSoChan++;
    }
    n /= 10;
  }

  if (countSoChan == 0) {
    printf("So %d KHÔNG phai la so toan chan\n", temp);
  } else {
    printf("So %d LA so toan chan\n", temp);
  }

  // Tìm số đảo ngược
  while (temp > 0) {
    int soHienTai = temp % 10;
    soDaoNguoc = soDaoNguoc * 10 + soHienTai;
    temp /= 10;
  }

  printf("So dao nguoc cua %d la: %d\n", n, soDaoNguoc);

  // Kiểm tra số đối xứng
  int temp2 = soDaoNguoc;
  if (n == temp2) {
    printf("So %d LA so doi xung\n", n);
  } else {
    printf("So %d KHÔNG phai la so doi xung\n", n);
  }

  return 0;
}
