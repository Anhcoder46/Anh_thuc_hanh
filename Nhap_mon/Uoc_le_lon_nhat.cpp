#include <stdio.h>

int main() {
  int n;

  printf("Nhap so nguyen duong n: ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("So n phai la so nguyen duong!");
    return 1;
  }

  for (int i = 1; i <= n; i++) {
    if (n % i == 0 && i % 2 != 0) {
        printf("%d ", i);
    }
  }

  int uocLeLonNhat = 1;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0 && i % 2 != 0 && i > uocLeLonNhat) {
      uocLeLonNhat = i;
    }
  }

  printf("\nUoc so le lon nhat: %d", uocLeLonNhat);

  return 0;
}