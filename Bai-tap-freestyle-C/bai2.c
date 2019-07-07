// nhap vao 1 chuoi. dem so ki tu la chu cai

#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int i, j = 0;

  printf("Nhap vao chuoi: ");
  scanf(" %[^\n]%*c", str);

  for (i = 0; i < strlen(str); i++) {
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
      j++;
    }
  }
  printf("So ki tu trong chuoi la: %d \n", j);
  return 0;
}
