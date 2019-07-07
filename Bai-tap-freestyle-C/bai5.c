/*tim cac so thuan nguyen to trong 1 khoang nhap vao tu ban phim,
so thuan nguyen to la so nguyen to va co cac chu so la so nguyen to,
va co tong cac chu so la so nguyen to.*/

#include <math.h>
#include <stdio.h>

int nhap(char *c) {
  int n;
  printf("Moi ban nhap vao so %s: ", c);
  scanf("%d", &n);
  return n;
}

int kiemTraSoNguyenTo(int x) {
  int i;
  int kt = 1;
  if (x < 2) {
    kt = 0;
  }
  for (i = 2; i <= sqrt(x); i++) {
    if (x % i == 0) {
      kt = 0;
      break;
    }
  }
  if (kt == 1) {
    return 1;
  } else {
    return 0;
  }
}

int kiemTraPhanTu(int x) {
  int t = 0;
  while (x != 0) {
    t = x % 10;
    x /= 10;
    if (kiemTraSoNguyenTo(t) == 0) {
      return 0;
    }
  }
  return 1;
}

int kiemTraTong(int x) {
  int tong = 0;
  while (x != 0) {
    tong += x % 10;
    x /= 10;
  }
  if (kiemTraSoNguyenTo(tong) == 1) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int i;
  int dem = 0;
  int n = nhap("bat dau");
  int m = nhap("ket thuc");
  printf("Cac so thuan nguyen to tim duoc la: ");
  for (i = n; i <= m; i++) {
    if (kiemTraSoNguyenTo(i) == 1 && kiemTraPhanTu(i) == 1 &&
        kiemTraTong(i) == 1) {
      printf("%d, ", i);
      dem++;
    }
  }
  printf("\nCo %d so thuan nguyen to trong khoang %d den %d. \n", dem, n, m);
  return 0;
}
