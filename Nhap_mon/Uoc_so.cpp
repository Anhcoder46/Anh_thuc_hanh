#include <stdio.h>

int main() {
  int n;
  printf("Nhap so nguyen duong n: ");
  scanf("%d", &n);
  
  if (n <= 0) {
    printf("So n phai la so nguyen duong!");
    return 0;
  }

  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      printf("%d ", i);
    }
  }

  return 0;
}
