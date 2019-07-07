#include <stdio.h>

int main(){
    int n=5;
    int x[5]={1, 3, 2, 2, 3};
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(x[i]==x[j]){
                x[i] = x[j];
                n--;
            }
        }
        printf("%d \n", x[i]);
    }
    return 0;
}