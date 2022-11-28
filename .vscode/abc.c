#include <stdio.h>
int main(){
    int n=4,i,j,k;
    for(i=1;i<n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<2*i;k++){
            printf("%d", j+64);
            j++;
        }
    }
}