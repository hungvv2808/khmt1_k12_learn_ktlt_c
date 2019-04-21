#include <stdio.h>
int main(){
    float n;
    printf("Nhap vao so km ban da di: ");   scanf("%f", &n);

    float tongtien = 0;
    if(n<1) tongtien = n*15000;
    else{
        if(2<=n || n<=5)    tongtien = 15000 + (n-1)*13500;
        else{
            if(n>=6)    tongtien = 15000 + 4*13500 + (n-5)*11000;
            else{
                if(n>120)   tongtien = (15000 + 4*13500 + 125*11000)*0.1;
            }
        }
    }

    printf("Tong tien ban phai tra la: %.3f(VND)\n", tongtien);
    return 0;
}
