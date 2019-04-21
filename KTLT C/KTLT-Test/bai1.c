#include <stdio.h>
int main(){
    int a, b, c, d;
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);
    printf("c = "); scanf("%d", &c);
    printf("d = "); scanf("%d", &d);

    int gtnn = 0;
    if(a<b && a<c && a<d)   gtnn = a;
    else{
        if(b<a && b<c && b<d)    gtnn = b;
        else{
            if(c<a && c<b && c<d)   gtnn = c;
            else    gtnn = d;
        }
    }
    printf("Gia tri nho nhat trong 4 so la: %d \n", gtnn);
    return 0;
}
