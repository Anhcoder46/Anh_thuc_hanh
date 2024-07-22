#include <stdio.h>

int main() {
  for (int i = 100; i <= 999; i++) {
    int tram = i / 100;
    int chuc = (i % 100) / 10;
    int donvi = i % 10;

    int tongLapPhuong = tram * tram * tram + chuc * chuc * chuc + donvi * donvi * donvi;

    if (tongLapPhuong == i) {
      printf("%d\n", i);
    }
  }

  return 0;
}
