#include <stdio.h>

int main() {
  int hang, cot;

  printf("Nhap hang: ");
  scanf("%d", &hang);
  printf("Nhap cot: ");
  scanf("%d", &cot);

  for (int i = 1; i <= cot; i++) {
    for (int j = 1; j <= hang; j++) {
      if (i == 1 || i == cot || j == 1 || j == hang) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
