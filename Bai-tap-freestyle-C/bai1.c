/*phan tich 1 so thanh cac thua so nguyen to*/

#include <stdio.h>

int nhap(){
  int n;
  printf("Moi ban nhap vao so n: ");
  scanf("%d",&n);
  return n;
}

void nguyenTo(int n){
  int i=2;

  /*for(i;i<=n;i++){
    if(n%i==0){
      printf("%d, ",i);
      n/=i;
      i--;
    }
  }*/

  while(n!=1){
    if(n%i==0){
      printf("%d, ",i);
      n/=i;
    }
    else{
      i++;
    }
  }
}

int main(){
  int n=nhap();
  printf("Thua so la cac so nguyen to cua %d la: ",n);
  nguyenTo(n);
  printf("\n");
  return 0;
}
