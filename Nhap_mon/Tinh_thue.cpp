#include <stdio.h>

int main() {

  int soLuong, donGia;
  float tien, thue;

  printf("Nhap so luong: ");
  scanf("%d", &soLuong);
  
  printf("Nhap don gia: ");
  scanf("%d", &donGia);

  tien = soLuong * donGia;

  thue = tien * 0.1;

  printf("\nTien: %.2f", tien);
  printf("\nThue: %.2f", thue);
  printf("\nTong tien phai tra: %.2f", tien + thue);

  return 0;
}