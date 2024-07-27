#include <stdio.h>

int main() {
  int h;
  printf("Nhap chieu cao h: ");
  scanf("%d", &h);

  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}