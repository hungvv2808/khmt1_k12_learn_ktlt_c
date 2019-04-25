#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void nhap(int *a, int n){
    for(int i=0; i<n; i++){
        printf("a[%i] = ", i+1);
        scanf("%i", &a[i]);
    }
}

void xuat(int *a, int n){
    for(int i=0; i<n; i++)  printf("%i, ", a[i]);
    printf("\n");
}

void demChanAm(int *a, int n){
    int dem = 0;
    int tong = 0;
    for(int i=0; i<n; i++){
        if(a[i]<0 && a[i]%2==0){
            dem++;
            tong+=a[i];
        }
        else{
            tong = 0;
            dem = 0;
        }
    }
    if(dem!=0){
        printf("So phan tu trong mang A chan am la: %i\n", dem);
        printf("Trung binh cong cac so chan am la: %.2f\n", (float)tong / dem);
    }
    else    printf("Mang A khong ton tai gia tri chan am can tim.\n");
}

void demLeDuong(int *a, int n){
    int dem = 0;
    int tong = 0;
    for(int i=0; i<n; i++){
        if(a[i]>0 && a[i]%2==1){
            dem++;
            tong+=a[i];
        }
    }
    if(dem!=0){
        printf("So phan tu trong mang A le duong la: %i\n", dem);
        printf("Trung binh cong cac so le duong la: %.2f\n", (float)tong / dem);
    }
    else    printf("Mang A khong ton tai gia tri le duong can tim.\n");
}

int kiemTraSoNguyenTo(int x){
    int kt = 1;
    if (x < 2)  kt = 0;
    for (int i = 2; i <= sqrt(x); i++){
        if (x % i == 0){
            kt = 0;
            break;
        }
    }
    if (kt == 1)    return 1;
    else    return 0;
}

void tbcNuyenTo(int *a, int n){
    int dem = 0, tong = 0;
    for(int i=0; i<n; i++){
        if(kiemTraSoNguyenTo(a[i])==1){
            dem++;
            tong+=a[i];
        }
    }
    printf("Trung binh cong cac so nguyen to trong mang A la: %.3f\n", (float)tong/dem);
}

int main(){
    int *a; int n;
    do{
        printf("Nhap n: ");
        scanf("%i", &n);
    } while (n < 3 || n > 25);
    a = (int *)malloc(n * sizeof(int));
    nhap(a, n);
    printf("Mang vua nhap: ");
    xuat(a, n);
    printf("- Chan Am:\n");
    demChanAm(a, n);
    printf("- Le Duong:\n");
    demLeDuong(a, n);
    tbcNuyenTo(a, n);
    return 0;
}