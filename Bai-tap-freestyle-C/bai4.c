/*viet mot chuong trinh nhap vao 1 so va in ra tong cac chu so cua so do.*/

#include <stdio.h>

int nhap() {
  int n;
  printf("Nhap vao mot so bat ki n: ");
  scanf("%d", &n);
  return n;
}

int tinhTong(int n) {
  int tong = 0;
  while (n != 0) {
    tong += n % 10;
    n /= 10;
  }
  return tong;
}

void inRa(int n, int tong) {
  printf("Tong cac chu so cua so %d vua nhap la: %d \n", n, tong);
}

int main() {
  int n = nhap();
  int tong = tinhTong(n);
  inRa(n, tong);
  return 0;
}
