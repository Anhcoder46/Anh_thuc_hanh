#include <stdio.h>

void docSo(int n) {
  int hangChuc, hangDonVi;

  hangChuc = n / 10;
  hangDonVi = n % 10;


  if (hangChuc == 0) {
    printf("Không mươi ");
  } else if (hangChuc == 1) {
    printf("Mười ");
  } else if (hangChuc == 2) {
    printf("Hai mươi ");
  } else if (hangChuc == 3) {
    printf("Ba mươi ");
  } else if (hangChuc == 4) {
    printf("Bốn mươi ");
  } else if (hangChuc == 5) {
    printf("Năm mươi ");
  } else if (hangChuc == 6) {
    printf("Sáu mươi ");
  } else if (hangChuc == 7) {
    printf("Bảy mươi ");
  } else if (hangChuc == 8) {
    printf("Tám mươi ");
  } else {
    printf("Chín mươi ");
  }

  if (hangDonVi == 0) {
    printf("không ");
  } else if (hangDonVi == 1) {
    printf("mốt ");
  } else if (hangDonVi == 2) {
    printf("hai ");
  } else if (hangDonVi == 3) {
    printf("ba ");
  } else if (hangDonVi == 4) {
    printf("bốn ");
  } else if (hangDonVi == 5) {
    printf("năm ");
  } else if (hangDonVi == 6) {
    printf("sáu ");
  } else if (hangDonVi == 7) {
    printf("bảy ");
  } else if (hangDonVi == 8) {
    printf("tám ");
  } else {
    printf("chín ");
  }
}

int main() {
  int n;
  printf("Nhập số nguyên có 2 chữ số: ");
  scanf("%d", &n);

  docSo(n);

  return 0;
}

//#include <stdio.h>
//
//void docSo(int n) {
//  int hangChuc, hangDonVi;
//
//  hangChuc = n / 10;
//  hangDonVi = n % 10;
//
//  switch (hangChuc) {
//    case 0:
//      printf("Không");
//      break;
//    case 1:
//      printf("Mười ");
//      break;
//    case 2:
//      printf("Hai mươi ");
//      break;
//    case 3:
//      printf("Ba mươi ");
//      break;
//    case 4:
//      printf("Bốn mươi ");
//      break;
//    case 5:
//      printf("Năm mươi ");
//      break;
//    case 6:
//      printf("Sáu mươi ");
//      break;
//    case 7:
//      printf("Bảy mươi ");
//      break;
//    case 8:
//      printf("Tám mươi ");
//      break;
//    case 9:
//      printf("Chín mươi ");
//      break;
//  }
//
//  switch (hangDonVi) {
//    case 0:
//      printf("không ");
//      break;
//    case 1:
//      printf("mốt ");
//      break;
//    case 2:
//      printf("hai ");
//      break;
//    case 3:
//      printf("ba ");
//      break;
//    case 4:
//      printf("bốn ");
//      break;
//    case 5:
//      printf("năm ");
//      break;
//    case 6:
//      printf("sáu ");
//      break;
//    case 7:
//      printf("bảy ");
//      break;
//    case 8:
//      printf("tám ");
//      break;
//    case 9:
//      printf("chín ");
//      break;
//  }
//}
//
//int main() {
//  int n;
//
//  printf("Nhập số nguyên có 2 chữ số: ");
//  scanf("%d", &n);
//
//  docSo(n);
//
//  return 0;
//}