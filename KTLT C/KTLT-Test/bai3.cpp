#include <iostream>
#include "math.h"
using namespace std;

bool nguyenTo(int *a, int n){
    int check=1;
    for(int i=0; i<n; i++){
        if(a[i]<2)  check=0;
        for(int j=2; j<sqrt(n); j++){
            if(a[j]%j==0){
                check = 0;
                break;
            }
        }
    }
    if(check==1)   return true;
    else        return false;
}

/*bool chinhPhuong(int *a, int n){
    for(int i=0; i<n; i++){
        if
    }
}*/

int tachSo(int *a, int n){
    int sopt=0;
    while(n!=0){
        a[sopt]=n%10;
        sopt++;
        n/=10;
    }
    return sopt;
}

void soThanhPhan(int *a, int n){
    cout << "Cac phan tu cua so vua nhap: ";
    for(int i=0; i<n; i++)  cout << a[i] << " ";
    cout << endl;
}

int main(){
    int n;
    cout << "n = ";     cin >> n;
    int *a; a = new int [n];
    int soPhanTu = tachSo(a, n);
    soThanhPhan(a, soPhanTu);
    if(nguyenTo(a, soPhanTu))   cout << "So vua nhap co cac so thanh phan la nguyen to." << endl;
    else    cout << "So vua nhap co cac thanh phan khong la nguyen to." << endl;
    return 0;
}