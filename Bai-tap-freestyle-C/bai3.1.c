/*kiem tra 1 ki tu nhap vao bat ki co nam trong bang chu cai khong dung in ra 1,
 * sai in ra 0*/

#include <stdio.h>
#include <string.h>

char nhapVaoKiTu() {
  char n;
  printf("Nhap vao mot ki tu bat ki: ");
  scanf("%c", &n);
  return n;
}

void kiemTra(char n) {
  if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z')) {
    printf(" 1 \n");
  } else {
    printf(" 0 \n");
  }
}

int main() {
  char n = nhapVaoKiTu();
  kiemTra(n);
  printf("(*note*\n   1 la ki tu thuoc bang chu cai.\n   0 la ki tu khong "
         "thuoc bang chu cai.)\n");
  return 0;
}
